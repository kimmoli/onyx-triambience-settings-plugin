#ifndef SETTINGSUI_H
#define SETTINGSUI_H
#include <QObject>
#include <QVariantList>
#include <QTimer>
#include <QMap>

class Q_DECL_EXPORT SettingsUi : public QObject
{
    Q_OBJECT

public:
    explicit SettingsUi(QObject *parent = 0);
    virtual ~SettingsUi();
};


#endif // SETTINGSUI_H
