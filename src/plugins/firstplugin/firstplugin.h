#ifndef FIRSTPLUGIN_H
#define FIRSTPLUGIN_H

#include <QObject>
#include <imyplugininterface.h>

class FirstPlugin : public IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.radovan.test" FILE "firstplugin.json")

public:
    explicit FirstPlugin();
    ~FirstPlugin();

    void initialize();
};

#endif // FIRSTPLUGIN_H
