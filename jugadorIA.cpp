#include "jugador1.h"
#include <iostream>
#include <string>
#include <time.h>

void jugador1::jugar() {

std::string valor;

srand(time(NULL));
int random = rand()%3;
printf("%d", random);



t:
if(random == 0) {valor = "Piedra";};
if(random == 1) {valor = "Papel";};
if(random == 2) {valor = "Tijera";};

}



