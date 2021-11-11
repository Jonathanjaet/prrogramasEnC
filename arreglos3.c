#include <stdio.h>

int main(){
    int lista[5]={3,67,2,0,-2};
    int i=0, aux=0;
    printf("Mostrando valores iniciales del arreglo\n\n");
    for(i=0;i<=4;i++){
        printf("%d, ",lista[i]);

    }

    for(i=0;i<=3;i++){
        if(lista[i] >= lista[i+1]){
            aux=lista[i];
            lista[i]=lista[i+1];
            lista[i+1]=aux;
        }
    }
    printf("\nMostrando valores finales del arreglo\n\n");
    for(i=0;i<=4;i++){
        printf("%d, ",lista[i]);

    }


}
