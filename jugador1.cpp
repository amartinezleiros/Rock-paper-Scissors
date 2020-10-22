#include "jugador1.h"
#include <iostream>
#include <string>



void jugador1::jugar() {


if (modo_juego == "Normal") {
t:
std::cout << "Escoge (Piedra, Papel, Tijera): " << std::endl;
std::cin >> valor;

if (valor == "piedra" || valor == "Piedra") {valor = "Piedra";}
else if (valor == "papel" || valor == "Papel") {valor = "Papel";}
else if (valor == "tijera" || valor == "Tijera") {valor = "Tijera";}
else goto t;

std::cout << "\nJugador uno ha escogido: " << valor << "\n" << std::endl; }

if (modo_juego == "Sheldon") {
d:
std::cout << "Escoge (Piedra, Papel, Tijera, Lagarto, Spock): " << std::endl;
std::cin >> valor;

if (valor == "piedra" || valor == "Piedra") {valor = "Piedra";}
else if (valor == "papel" || valor == "Papel") {valor = "Papel";}
else if (valor == "tijera" || valor == "Tijera") {valor = "Tijera";}
else if (valor == "lagarto" || valor == "Lagarto") {valor = "Lagarto";}
else if (valor == "spock" || valor == "Spock") {valor = "Spock";}
else goto d;

std::cout << "\nJugador uno ha escogido: " << valor << "\n" << std::endl; }


}

