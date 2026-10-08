#ifndef BOTAO_H
#define BOTAO_H

#include <Arduino.h>

class Botao
{
private:
    uint8_t _pinoBotao;
    bool _estadoAtualBotao = 1;
    bool _estadoAnteriorBotao = 1;
    bool _pressionou = 0;
    bool _soltou = 0;
    uint32_t _ultimaMudanca_ms = 0;
    uint32_t _tempoDebounce_ms = 20;
    bool _estadoUltimaAcao = HIGH;
    uint32_t tempoDecorrido();

    //*bool BotaoS = digitalRead (_pinoBotao);
    //*bool BotaoS1 = 0;

public:
    Botao(uint8_t pino);
    void inicair();
    void atualizar();
    bool pressionou();
    bool soltou();
    //*   bool segurou();
};

#endif