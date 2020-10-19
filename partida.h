#pragma once
#include "jugador.h"

class partida {

protected:
    jugador jugadores[2];
    int score[2];

        public:

    int comprobar_mejor3();
    bool fin_de_juego();
    int comprobar_ganador();

    partida(jugador&, jugador&); //CONSTRUCTOR
    
};

