#include <stdio.h>

int main(){
    int lista[5]={3,67,2,0,-2};
    int i=0, acumulador=0;
    printf("Mostrando valores del arreglo\n\n");
    for(i=0;i<=4;i++){
        printf("%d, ",lista[i]);
        acumulador = acumulador + lista[i];
    }

    printf("\nLa suma de los valores del arreglo es %d\n",acumulador);
}
