#include "jugadorIA.h"
#include <iostream>
#include <string>
#include <time.h>
#include <jugador.h>

void jugadorIA::jugar() {


srand((unsigned int)time(NULL));


if (modo_juego == "Normal") { 


int random = rand()%3;
if(random == 0) {valor = "Piedra";};
if(random == 1) {valor = "Papel";};
if(random == 2) {valor = "Tijera";};
std::cout << "Jugador dos ha escogido: " << valor << std::endl;
}


else if (modo_juego == "Sheldon") { 

int random = rand()%5;
if(random == 0) {valor = "Piedra";};
if(random == 1) {valor = "Papel";};
if(random == 2) {valor = "Tijera";};
if(random == 3) {valor = "Lagarto";};
if(random == 4) {valor = "Spock";};
std::cout << "Jugador dos ha escogido: " << valor << std::endl;

}
}



