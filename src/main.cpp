#include <Arduino.h>
#include "led.h"
#include "Botao.h"

Led ledAmarelo(9);
Led ledBranco(10);
Led ledVerde(12);
Led ledVermelho(13);
Botao BotaoEsquerda(5);

void setup() {
 ledAmarelo.iniciar();
 ledAmarelo.ativarPiscar(200);
  ledBranco.iniciar();
  ledBranco.ativarPiscar(200);
  ledVerde.iniciar();
  ledVerde.ativarPiscar(200);
  ledVermelho.iniciar();
  ledVermelho.ativarPiscar(200);
}

void loop() {  // put your main code here, to run repeatedly:

ledAmarelo.atualizar();
ledBranco.atualizar();
ledVerde.atualizar();
ledVermelho.atualizar();
}