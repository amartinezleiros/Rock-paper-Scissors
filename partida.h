#pragma once
#include "jugador.h"

class partida {

protected:
    jugador jugadores[2];
    int score[2];

        public:

    int comprobar_ganador();
    bool fin_de_juego();

};

