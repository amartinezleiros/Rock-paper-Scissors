#include "jugador1.h"
#include <iostream>
#include <string>

void jugador1::jugar() {

std::string valor;
t:
std::cout << "Escoge (Piedra, Papel, Tijera): " << std::endl;
std::cin >> valor;


if (valor == "piedra" || valor == "Piedra") {valor = "Piedra";};
else (valor == "papel" || valor == "Papel") {valor = "Papel"}
else (valor == "tijera" || valor == "Tijera") {valor = "Tijera"}
else {goto t;};


}