#ifndef COINEXCHANGE_H
#define COINEXCHANGE_H

#include <QObject>
#include <QVector>
#include <sodium.h>

#include "src/modules/interactiveModules/ainteractivemodule.h"
#include "src/adoxabot.h"

class AdoxaBot;

class CoinExchange : public AInteractiveModule
{
    Q_OBJECT
public:
    explicit CoinExchange(QObject *parent = nullptr);
    enum COMMANDS {

    };
    void requestService(QString args, int routerIndex, int xprIndex);
    ProtectedControl* setBotInstance(AdoxaBot* bot);
private:
    AdoxaBot *bot;
};

#endif // COINEXCHANGE_H
