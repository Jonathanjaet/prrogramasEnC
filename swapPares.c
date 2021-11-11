/* Este programa intercambia 2 valores
 * ingresados por el usuario cuando se
 * cumple la condición de que sean pares
 */

// Librerias
#include <stdio.h>

// Funciones
int swap(int *n1,int *n2);  // Funcion de intercambio de valores

// Variables Globales
int num1=0, num2=0;

#include <stdio.h>

int main(){
    int resultado=0, contador=0;
    printf("Ingrese el primer valor...: ");
    scanf("%d",&num1);
    resultado = num1 % 2;
    if (resultado == 0){
            contador = contador + 1;
    }
    printf("\n");
    printf("Ingrese el segundo valor...: ");
    scanf("%d",&num2);
    resultado = num2 % 2;
    if (resultado == 0){
            contador = contador + 1;
    }

    printf("\n El valor inicial de num1 es %d y el valor inicial de num2 es %d \n",num1,num2);

    if (contador == 2){
            swap(&num1,&num2);
            printf("\n El valor final de num1 es %d y el de num2 es %d \n",num1,num2);
    }
    else {
            printf("\n No se intercambiaron los valores porque al menos un valor ingresado no es par \n");
    }

}

int swap(int *n1, int *n2){
        int C=0;

        C=(*n1);
        (*n1)=(*n2);
        (*n2)=C;

        return 0;
}
