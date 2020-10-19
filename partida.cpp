#include <iostream>
#include "partida.h"




int partida::comprobar_ganador(){

    if (score[0] == 3) {
        return 1;
}

    if (score[1] == 3) {
        return 2;
}
return 0;

}

bool partida::fin_de_juego() {
    if (comprobar_ganador() == 1) {
        return true;
    }
     if (comprobar_ganador() == 2) {
        return true;
    }
    return false;
}
