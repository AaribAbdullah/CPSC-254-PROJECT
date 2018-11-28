#include "mainwindow.h"
#include <QApplication>

#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QSplashScreen *splash = new QSplashScreen;                      // added new
    splash -> setPixmap(QPixmap("C:/Users/MD/Desktop/Splash_Screen.jpg"));   // added new

    splash -> show();                                               // added new

    MainWindow w;

    QTimer::singleShot(10000, splash, SLOT(close()));   // added new
    QTimer::singleShot(10000, &w, SLOT(show()));        // added new


   //w.show();

    return a.exec();
}
