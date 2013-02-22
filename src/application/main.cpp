#include "widget.h"
#include <QApplication>
#include <pluginmanager.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    
    PluginManager pluginManager;
    QString pluginPath = QApplication::applicationDirPath() + "/../plugins";
    qDebug() << pluginPath;
    PluginManager::setPluginPath(pluginPath);
    PluginManager::loadPlugins();

    return a.exec();
}
