#pragma once
#include <string>

class jugador {

// Atributos de jugador

public:

    std::string nombre;
    std::string valor;
    std::string modo_juego;

//Métodos y acciones
public :

jugador(std::string n, std::string m);
void jugar();
};

