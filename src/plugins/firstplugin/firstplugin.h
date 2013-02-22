#ifndef FIRSTPLUGIN_H
#define FIRSTPLUGIN_H

#include <QObject>
#include <imyplugininterface.h>

class FirstPlugin : public QObject, public IPlugin
{
    Q_OBJECT
    Q_INTERFACES(IPlugin)
public:
    explicit FirstPlugin(QObject *parent = 0);
    ~FirstPlugin();

    void initialize();
};

#endif // FIRSTPLUGIN_H
