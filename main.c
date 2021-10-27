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
    int codigoJugador, i, cant;
    cant=cartonesEnJuego->totalCartones;
    for (i = 0; i < cant; i++) {
        scanf("%d", &codigoJugador);
        carton->cartonJugador[i]=codigoJugador;
    }
}

int main(void) {

    return 0;
}