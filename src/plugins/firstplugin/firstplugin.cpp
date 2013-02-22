#include "firstplugin.h"
#include <QDebug>

FirstPlugin::FirstPlugin(QObject *parent) :
    QObject(parent)
{
}

FirstPlugin::~FirstPlugin()
{
}

void FirstPlugin::initialize()
{
    qDebug() << "My fist plugin";
}

Q_EXPORT_PLUGIN(FirstPlugin)

