#include <stdio.h>
#include <string.h>
#include "definiciones.h"
#include "calculos.c"

char nombres[MAX_PRODUCTOS][MAX_NOMBRE];
float precios[MAX_PRODUCTOS];
int cantidad[MAX_PRODUCTOS];



int main(int argc, char const *argv[])
{
    int opc2 ;
    int opc;

    do
    {
        opc = menuPrincipal();
        

        switch (opc)
        {
        case 1:
            ingporuser = IngDatos(nombres, precios,ingporuser);
            break;

        case 2:
            printf("Precio total de los productos: %.2f\n", CalTotal(precios, ingporuser));
            break;

        case 3:

            MasCaroMasBarato(precios, nombres, ingporuser);

            break;

        case 4:

            printf("Precio promedio de todos los productos es de : %.2f\n", CalPromedio(precios, ingporuser));
            break;


        case 5 :
         BuscPorNombre(nombres, precios, ingporuser);
            break;

        default:
            break;
        }
        opc2 = ContinuarPrograma();

    } while (opc2 = 1);

    return 0;
}
