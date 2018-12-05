#include "mainwindow.h"
#include <QApplication>

#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QSplashScreen *splash = new QSplashScreen;                      // added new
    splash -> setPixmap(QPixmap("C:/Users/MD/Desktop/Splash_Screen.jpg"));   // added new
    // we are bringing up a photo for the wait screen
    splash -> show();                                               // added new

    MainWindow w;

    QTimer::singleShot(10000, splash, SLOT(close()));   // added new
    QTimer::singleShot(10000, &w, SLOT(show()));        // added new
// The top Qtimer for the wait scree that is in duration of 10000 miliseconds or 10 seconds
// The the bottom QTimer is for the main window where we input our entries, in ten seconds

   //w.show();

    return a.exec(); // returns an execution object
}
