#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    unsigned short numero;
    bool marcado;
} tipoCasillaCarton;

typedef struct {
    size_t codigoJugador;
    tipoCasillaCarton cartonJugador[5][5];
} tipoCarton;


typedef struct {
    size_t totalCartones;
    tipoCarton *cartonesEnJuego;
    unsigned short panelDeNumeros[5][15];
} tipoSorteo;

void llenarCarton(tipoCarton *carton, tipoSorteo *cartonesEnJuego) {
    int codigoJugador, i, cant, j, numero;
    cant=cartonesEnJuego->totalCartones;
    do {
        scanf("%d", &codigoJugador);
        for (i = 0; i < 5; i++) {
            for(j=0;j<5;j++){
                scanf("%d", &numero);
                carton->cartonJugador[i][j].numero=numero;
            }
        }
    }while(codigoJugador!=0);
}



int main(void) {

    return 0;
}