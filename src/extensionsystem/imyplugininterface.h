#ifndef IMyPluginInterface_H
#define IMyPluginInterface_H

#include "extensionsystem_global.h"
#include <QtPlugin>

#define IPlugin_iic "com.PluginTest.extensionsystem.IPlugin"

class EXTENSIONSYSTEM_EXPORT IPlugin : public QObject
{
    Q_OBJECT

public:
    IPlugin();
    virtual ~IPlugin();
    virtual void initialize() = 0;
};

#endif // IMyPluginInterface_H
