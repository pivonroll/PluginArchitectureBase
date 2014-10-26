#include "firstplugin.h"
#include <QDebug>

FirstPlugin::FirstPlugin() :
    IPlugin()
{
}

FirstPlugin::~FirstPlugin()
{
}

void FirstPlugin::initialize()
{
    qDebug() << "My fist plugin";
}
