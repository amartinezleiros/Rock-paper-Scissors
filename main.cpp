#include <iostream>
#include "jugador.h"
#include "jugador1.h"
#include "jugadorIA.h"
#include "partida.h"



int main() {

    jugador1 j1; //INSTANCIA
    jugadorIA jIA;
    partida p(j1, jIA);
    

        while (!p.fin_de_juego()) {
   
        j1.jugar();
        jIA.jugar();
        
        p.comprobar_ganador();
        p.comprobar_mejor3();


    }




    system("pause");
}
