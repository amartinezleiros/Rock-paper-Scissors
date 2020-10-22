#include "jugador.h"
#include <iostream>

void jugador::jugar() {} 
std::string jugador::modo(){

    std::cout << "Escoja tipo de partida(Normal/Sheldon): " << std::endl;
    std::cin >> modo_juego;
}
