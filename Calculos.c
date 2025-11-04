#ifndef CALCULOS_H
#define CALCULOS_H
#include "definiciones.h"

int menuPrincipal()
{
    int opc;
    printf("Menu Principal:\n");
    printf("1. Ingresar datos de productos\n");
    printf("2. Calcular precio total del inventario\n");
    printf("3. Encontrar producto mas caro y mas barato\n");
    printf("4. Calcular precio promedio de todos los productos\n");
    printf("5. Buscar producto por nombre y mostrar su precio\n");
    printf("Seleccione una opcion (1-5): ");
    scanf("%d", &opc);
    return opc;
}

int ContinuarPrograma()
{
    int opc2;
    printf("Desea continuar? (1: Si, 0: No): ");
    scanf("%d", &opc2);
    return opc2;
}


int IngDatos(char nombres[][MAX_NOMBRE], float precios[],int ingporuser)
{
    int cantporuser;
    printf("Ingrese la cantidad de productos: ");
    scanf("%d", &cantporuser);

    for (int i = 0; i < cantporuser; i++)
    {
        printf("Ingrese el nombre del producto %d: ", i);
        fflush(stdin);
        fgets(nombres[i], MAX_NOMBRE, stdin);
        int len = strlen(nombres[i]) - 1;
        nombres[i][len] = '\0';
        printf("Ingrese el precio del producto %d: ", i);
        scanf("%f", &precios[i]);
    
    }


}    
    float CalTotal(float precios[], int ingporuser)
    {
        float total = 0.0;
        for (int i = 0; i < ingporuser; i++)
        {
            total += precios[i];
        }
        return total;
    }
    
    
    float CalPromedio(float precios[], int ingporuser)
    {

        float total = CalTotal(precios, ingporuser);
        return total / ingporuser;
    }

    void MasCaroMasBarato(float precios[], char nombres[][MAX_NOMBRE], int ingporuser)
    {
        int Caro = 0;
        int Barato = 0;
        for (int i = 1; i < ingporuser; i++)
        {
            if (precios[i] > precios[Caro])
            {
                Caro = i;
            }
            if (precios[i] < precios[Barato])
            {
                Barato = i;
            }
        }
        printf("Producto mas caro: %s con precio %.2f\n", nombres[Caro], precios[Caro]);
        printf("Producto mas barato: %s con precio %.2f\n", nombres[Barato], precios[Barato]);
    }
    void BuscPorNombre(char nombres[ingporuser][MAX_NOMBRE], float precios[ingporuser], int ingporuser)
    {
        char nombreBuscado[MAX_NOMBRE];
        printf("Ingrese el nombre del producto a buscar: ");
        fflush(stdin);
        fgets(nombreBuscado, MAX_NOMBRE, stdin);
        int len = strlen(nombreBuscado) - 1;
        nombreBuscado[len] = '\0';

        int encontrado = 0;
        for (int i = 0; i < ingporuser; i++)
        {
            if (strcmp(nombres[i], nombreBuscado) == 0) // Es una comparacion 
            {
                printf("El precio del producto %s es: %.2f\n", nombres[i], precios[i]);
                encontrado = 1;
                break;
            }
        }
        if (encontrado == 0)
        {
            printf("Producto no encontrado.\n");
        }
    }

#endif // CALCULOS_H
