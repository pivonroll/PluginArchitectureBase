#ifndef %PluginName:u%_%CppHeaderSuffix:u%
#define %PluginName:u%_%CppHeaderSuffix:u%

#include <QObject>
#include <imyplugininterface.h>

class %PluginName% : public IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.plugin.based.app" FILE "%PluginName:l%.json")

public:
    explicit %PluginName%();
    ~%PluginName%();

    void initialize();
};

#endif // FIRSTPLUGIN_H
