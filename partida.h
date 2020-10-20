#pragma once
#include "jugador.h"

class partida {

protected:
    jugador& jugador1;
    jugador& jugador2;
    int score[2] = {0,0};

        public:

    int comprobar_mejor3();
    bool fin_de_juego();
    int comprobar_ganador();

    partida(jugador&, jugador&); //CONSTRUCTOR
    
    
    
};

