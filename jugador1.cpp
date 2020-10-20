#include "jugador1.h"
#include <iostream>
#include <string>


void jugador1::jugar() {

t:
std::cout << "Escoge (Piedra, Papel, Tijera): " << std::endl;
std::cin >> valor;

if (valor == "piedra" || valor == "Piedra") {valor = "Piedra";}
else if (valor == "papel" || valor == "Papel") {valor = "Papel";}
else if (valor == "tijera" || valor == "Tijera") {valor = "Tijera";}
else goto t;

std::cout << "\nJugador uno ha escogido: " << valor << "\n" << std::endl;

}