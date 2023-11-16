#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COLUMNAS 7
#define FILAS 5
//Lo que yo hice fue que primero saque la triangular inferior y luego la triangular superior 
void MatrizAleatoria(int matriz[FILAS][COLUMNAS]) {
  int a, b;
    srand(time(NULL));

    
    for (a = 0; a < FILAS; a++) 
	{
        for (b = 0; b < COLUMNAS; b++) 
		{
            matriz[a][b] = rand() % 100; 
        }
    }
}

void Matriz(int matriz[FILAS][COLUMNAS]) {
  int a, b;

    for (a = 0; a < FILAS; a++)
	{
        for (b = 0; b < COLUMNAS; b++) 
		{
            printf("%4d ", matriz[a][b]);
        }
        printf("\n");
    }
}

int SumPrincipal(int matriz[FILAS][COLUMNAS]) {
  int suma = 0;
  int a;

 
    for (a = 0; a < FILAS && a < COLUMNAS; a++) 
	{
        suma += matriz[a][a];
    }

    return suma;
}

int PrimeraFilaSum(int matriz[FILAS][COLUMNAS]) {
  int suma = 0;
  int b;


    for (b = 0; b < COLUMNAS; b++) 
	{
        suma += matriz[0][b];
    }

    return suma;
}

int UltimaColumnaSum(int matriz[FILAS][COLUMNAS]) {
  int suma = 0;
  int a;

 
    for (a = 0; a < FILAS; a++) 
	{
        suma += matriz[a][COLUMNAS - 1];
    }

    return suma;
}

int SumFilasPares(int matriz[FILAS][COLUMNAS]) {
  int suma = 0;
  int a, b;


    for (a = 0; a < FILAS; a += 2) 
	{
        for (b = 0; b < COLUMNAS; b++) 
		{
            suma += matriz[a][b];
        }
    }

    return suma;
}

int ColumnasImparesSum(int matriz[FILAS][COLUMNAS]) {
  int suma = 0;
  int a, b;

   
    for (b = 0; b < COLUMNAS; b += 2) 
	{
        for (a = 0; a < FILAS; a++) 
		{
            suma += matriz[a][b];
        }
    }

    return suma;
}

int TriangularSuperiorSum(int matriz[FILAS][COLUMNAS]) {
  int suma = 0;
  int a, b;

   
    for (a = 0; a < FILAS; a++) 
	{
        for (b = a + 1; b < COLUMNAS; b++) 
		{
            suma += matriz[a][b];
        }
    }

    return suma;
}

int TriangularInferiorSum(int matriz[FILAS][COLUMNAS]) {
  int suma = 0;
    a, b;


    for (a = 0; a < FILAS; a++) 
	{
        for (b = 0; b < a; b++) 
		{
            suma += matriz[a][b];
        }
    }

    return suma;
}

int main() {
    int matriz[FILAS][COLUMNAS];

    MatrizAleatoria(matriz);

printf("La matriz es:\n");
    Matriz(matriz);

    printf("\nEsta es la diagonal principal: %d\n", SumPrincipal(matriz));
    
    printf("Esta es la primera fila: %d\n", PrimeraFilaSum(matriz));
    
    printf("Esta es la suma de la ultima columna: %d\n", UltimaColumnaSum(matriz));
    
    printf("Esta es la suma de las filas pares: %d\n", SumFilasPares(matriz));
    
    printf("Esta es la suma de las columnas impares: %d\n", ColumnasImparesSum(matriz));
    
    printf("Esta es la suma de la triangular inferior: %d\n", TriangularInferiorSum(matriz));
    
    printf("Esta es la suma de la triangular superior: %d\n", TriangularSuperiorSum(matriz));

    return 0;
}
  

