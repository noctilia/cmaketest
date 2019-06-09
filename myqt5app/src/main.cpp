#include <iostream>
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    app.setOrganizationName("Trolltech");
    app.setApplicationName("Application Example");
    
    MainWindow mainWindow;

    mainWindow.show();
    return app.exec();
}
