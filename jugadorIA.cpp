#include "jugadorIA.h"
#include <iostream>
#include <string>
#include <time.h>

void jugadorIA::jugar() {

std::string valor;

srand((unsigned int)time(NULL));
int random = rand()%3;
printf("%d", random);




if(random == 0) {valor = "Piedra";};
if(random == 1) {valor = "Papel";};
if(random == 2) {valor = "Tijera";};

}



