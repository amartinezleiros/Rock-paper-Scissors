#include "partidasheldon.h"
#include <iostream>


int partidasheldon::comprobar_ganador() {
      
     int resultado = partida::comprobar_ganador();

     if (resultado) {
         return resultado;

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







}