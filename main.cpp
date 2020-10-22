#include <iostream>
#include "jugador.h"
#include "jugador1.h"
#include "jugadorIA.h"
#include "partida.h"
#include "partidasheldon.h"


std::string modo(){
    std::string modo_juego;

    std::cout << "Escoja tipo de partida(Normal/Sheldon): " << std::endl;
    std::cin >> modo_juego;
    if (modo_juego == "Sheldon" || modo_juego == "sheldon") {modo_juego = "Sheldon";}
    if (modo_juego == "Normal" || modo_juego == "normal") {modo_juego = "Normal";}
    return modo_juego;
}


int main() {


   
    std::string m;

       
        m = modo();
   
        jugador1 j1("Asel", m); //INSTANCIA
        jugadorIA jIA(m);
        partida p(j1, jIA);
        
        


        while (!p.fin_de_juego()) {
   
        j1.jugar();
        jIA.jugar();
        p.comprobar_ganador();
        p.comprobar_mejor3();


    }




    system("pause");
}
