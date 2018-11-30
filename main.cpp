#include "mainwindow.h"
#include <QApplication>

#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen;                      // added new
    splash -> setPixmap(QPixmap("/home/ar-15/Desktop/Qt_GUI/test_gif.gif"));   // please change file type and path of file respectivley
    splash -> show();                                               // added new

    MainWindow w;

    QTimer::singleShot(5000, splash, SLOT(close()));   // added new
    QTimer::singleShot(5000, &w, SLOT(show()));        // added new

   // w.show();

    return a.exec();
}
