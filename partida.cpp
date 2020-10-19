#include <iostream>
#include "partida.h"


//       FUNCION COMPROBAR MEJOR DE 3                    //

int partida::comprobar_mejor3(){

    if (score[0] == 3) {
        return 1;
}

    if (score[1] == 3) {
        return 2;
}
return 0;

}






//         FUNCION COMPROBAR SI EL JUEGO TERMINÓ                       //

bool partida::fin_de_juego() {
    if (comprobar_mejor3() == 1) {

        return true;
        std::cout << "gana juego jugador 1";
    }
     if (comprobar_mejor3() == 2) {
        return true;
        std::cout << "gana juego jugador 2";
    }

    return false;
}

partida::partida(jugador&A, jugador&B){
    jugadores[0] = A;
    jugadores[1] = B;
}





//       FUNCION COMPROBAR EL GANADOR DE CADA JUGADA                   //

int partida::comprobar_ganador() {

    if (jugadores[0].valor == "Piedra" && jugadores[1].valor == "Papel")
{std::cout << "Gana el jugador máquina" << std::endl;
score[1]++;
}
if (jugadores[0].valor == "Piedra" && jugadores[1].valor == "Tijera")
{std::cout << "Gana el jugador persona" << std::endl;
score[0]++;
}
if (jugadores[0].valor == "Piedra" && jugadores[1].valor == "Piedra")
{std::cout << "Empate" << std::endl;
}
if (jugadores[0].valor == "Papel" && jugadores[1].valor == "Piedra")
{std::cout << "Gana el jugador persona" << std::endl;
score[0]++;
}
if (jugadores[0].valor == "Papel" && jugadores[1].valor == "Tijera")
{std::cout << "Gana el jugador máquina" << std::endl;
score[1]++;
}
if (jugadores[0].valor == "Papel" && jugadores[1].valor == "Papel")
{std::cout << "Empate" << std::endl;
}
if (jugadores[0].valor== "Tijera" && jugadores[1].valor == "Piedra")
{std::cout << "Gana el jugador máquina" << std::endl;
score[1]++;
}
if (jugadores[0].valor == "Tijera" && jugadores[1].valor == "Papel")
{std::cout << "Gana el jugador persona" << std::endl;
score[0]++;
}
if (jugadores[0].valor == "Tijera" && jugadores[1].valor == "Tijera")
{std::cout << "Empate" << std::endl;
}

return 0;
}