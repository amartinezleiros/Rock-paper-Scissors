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
        std::cout << "Finaliza el juego. Gana el jugador 1                        ";
        return true;

    }
     if (comprobar_mejor3() == 2) {
         std::cout << "Finaliza el juego. Gana el jugador 2                        ";
        return true;
       
    }

    return false;
}

partida::partida(jugador&A, jugador&B):jugador1(A), jugador2(B){

    score[0] = 0;
    score[1] = 0;
}





//       FUNCION COMPROBAR EL GANADOR DE CADA JUGADA                   //

int partida::comprobar_ganador() {

if (jugador1.valor == "Piedra" && jugador2.valor == "Papel")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}
if (jugador1.valor == "Piedra" && jugador2.valor == "Tijera")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor == "Piedra" && jugador2.valor == "Piedra")
{std::cout << "\nEmpate" << std::endl;
}
if (jugador1.valor == "Papel" && jugador2.valor == "Piedra")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor == "Papel" && jugador2.valor == "Tijera")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}
if (jugador1.valor == "Papel" && jugador2.valor == "Papel")
{std::cout << "\nEmpate" << std::endl;
}
if (jugador1.valor== "Tijera" && jugador2.valor == "Piedra")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}
if (jugador1.valor == "Tijera" && jugador2.valor == "Papel")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor == "Tijera" && jugador2.valor == "Tijera")
{std::cout << "\nEmpate" << std::endl;
}
if (jugador1.valor == "Lagarto" && jugador2.valor == "Piedra")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}
if (jugador1.valor == "Lagarto" && jugador2.valor == "Papel")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor == "Lagarto" && jugador2.valor == "Tijera")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}
if (jugador1.valor == "Lagarto" && jugador2.valor == "Lagarto")
{std::cout << "\nEmpate" << std::endl;
}
if (jugador1.valor == "Lagarto" && jugador2.valor == "Spock")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor == "Spock" && jugador2.valor == "Piedra")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor== "Spock" && jugador2.valor == "Papel")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}
if (jugador1.valor == "Spock" && jugador2.valor == "Tijera")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor == "Spock" && jugador2.valor == "Lagarto")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}
if (jugador1.valor == "Spock" && jugador2.valor == "Spock")
{std::cout << "\nEmpate" << std::endl;
}

if (jugador1.valor == "Piedra" && jugador2.valor == "Lagarto")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor == "Papel" && jugador2.valor == "Lagarto")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}
if (jugador1.valor == "Tijera" && jugador2.valor == "Lagarto")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor == "Piedra" && jugador2.valor == "Spock")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}
if (jugador1.valor == "Papel" && jugador2.valor == "Spock")
{std::cout << "\nGana la ronda el jugador persona" << std::endl;
score[0]++;
}
if (jugador1.valor == "Tijera" && jugador2.valor == "Spock")
{std::cout << "\nGana la ronda el jugador maquina" << std::endl;
score[1]++;
}

std::cout << " \n          *************************\n" << "Contador: *  Player1    Player 2  *\n" << "          *     " << score[0] << "          " << score[1] << "      *   " << std::endl;
std::cout <<  "          *************************\n" << std::endl;
return 0;
}