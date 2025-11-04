#ifndef DEFINICIONES_H
#define DEFINICIONES_H
#include <stdio.h>
#include <string.h>


#define MAX_PRODUCTOS 10
#define MAX_NOMBRE 20

int ingporuser;

int menuPrincipal();

int ContinuarPrograma();

int IngDatos(char nombres[MAX_PRODUCTOS][MAX_NOMBRE], float precios[MAX_PRODUCTOS],int ingporuser);

float CalTotal(float precios[MAX_PRODUCTOS], int ingporuser);

float CalPromedio(float precios[MAX_PRODUCTOS], int ingporuser);

void MasCaroMasBarato(float precios[MAX_PRODUCTOS], char nombres[MAX_PRODUCTOS][MAX_NOMBRE], int ingporuser);

void BuscPorNombre(char nombres[MAX_PRODUCTOS][MAX_NOMBRE], float precios[MAX_PRODUCTOS], int ingporuser);

#endif // DEFINICIONES_H

