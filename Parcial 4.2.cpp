#include <stdio.h>

#define ORDEN 3

void llenarMatriz(int matriz[ORDEN][ORDEN]) {
    printf("Numeros de la matriz:\n");
    int a, b;
    for (a = 0; a < ORDEN; a++) 
	{
        for (b = 0; b < ORDEN; b++) 
		{
            printf("Elemento en la posición [%d][%d]: ", a, b);
            scanf("%d", &matriz[a][b]);
        }
    }
}

void imprimirMatriz(int matriz[ORDEN][ORDEN]) {
    printf("Matriz :\n");
    int a, b;
    for (a = 0; a < ORDEN; a++) 
	{
        for (b = 0; b < ORDEN; b++) 
		{
            printf("%d ", matriz[a][b]);
        }
        printf("\n");
    }
}

int esMatrizMagica(int matriz[ORDEN][ORDEN]) {
    int sumaFila, sumaColumna, sumaDiagonal1 = 0, sumaDiagonal2 = 0;
    int a, b;

    sumaFila = 0;
    for (b = 0; b < ORDEN; b++) 
	{
        sumaFila += matriz[0][b];
    }

    for (a = 1; a < ORDEN; a++) 
	{
        int sumaFilaActual = 0;
        for (b = 0; b < ORDEN; b++) 
		{
            sumaFilaActual += matriz[a][b];
        }

        if (sumaFilaActual != sumaFila) 
		{
            return 0; 
        }
    }

    for (b = 0; b < ORDEN; b++) {
        sumaColumna = 0;
        for (a = 0; a < ORDEN; a++) 
		{
            sumaColumna += matriz[a][b];
        }

        if (sumaColumna != sumaFila) {
            return 0; 
        }
    }

    for (a = 0; a < ORDEN; a++) 
	{
        sumaDiagonal1 += matriz[a][a];
    }

    for (a = 0; a < ORDEN; a++) {
        sumaDiagonal2 += matriz[a][ORDEN - 1 - a];
    }

    return (sumaDiagonal1 == sumaFila) && (sumaDiagonal2 == sumaFila);
}

int main() {
    int matriz[ORDEN][ORDEN];

    llenarMatriz(matriz);

    imprimirMatriz(matriz);

    if (esMatrizMagica(matriz)) 
	{
        printf("Matriz mágica.\n");
    } else {
        printf("Matriz no mágica.\n");
    }

    return 0;
}


