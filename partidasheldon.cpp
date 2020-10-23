#include "partidasheldon.h"
#include <iostream>


int partidasheldon::comprobar_ganador() {
      
    int resultado = partida::comprobar_ganador();

    if (resultado) {
        return resultado;
    }

    std::string grafo[7][2] = {
        {"Piedra", "Lagarto"}, {"Lagarto", "Spock"}, {"Spock", "Tijeras"}, {"Lagarto", "Papel"}, 
        {"Tijeras", "Lagarto"}, {"Papel", "Spock"}, {"Spock", "Piedra"}
    };

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 2; j++) {
            if (jugador1.valor == grafo[i][j] && jugador2.valor == grafo[i][1-j]) {
                score[j]++;
                std::cout << "Gana el jugador " << (j? jugador2.nombre : jugador1.nombre) << std::endl;
                break;
            }
        }        
    }
}