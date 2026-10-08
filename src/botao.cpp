//! Botao cpp

#include "botao.h"

Botao:: Botao(uint8_t pino) : _pinoBotao(pino) { //TODO Lista de inicializacao
}

void Botao:: inicair(){
pinMode (_pinoBotao, INPUT_PULLUP);
}

void Botao:: atualizar(){
    _pressionou = false;
    _soltou = false;
    bool _estadoAtualBotao = digitalRead (_pinoBotao);

    if(_estadoAtualBotao != _estadoAnteriorBotao){
        _ultimaMudanca_ms = millis();
}
    const uint32_t tempoDecorrido = millis() - _ultimaMudanca_ms;
    if (tempoDecorrido > _tempoDebounce_ms){
        const bool acaoExecutada = _estadoUltimaAcao == _estadoAtualBotao;
        if (!acaoExecutada){
            _estadoUltimaAcao = _estadoAtualBotao;
            const bool botaoPressionado = ! _estadoAtualBotao;
            
            botaoPressionado
            ? _pressionou = true
            : _soltou = true;
        }
        }
    }

bool Botao:: pressionou () {
    
    return _pressionou;
}

bool Botao:: soltou(){

    return _soltou;
}

/*bool Botao:: segurou(){
    if (!BotaoS && BotaoS1 == 1 ) {

    }
    BotaoS1 = BotaoS;
}
*/