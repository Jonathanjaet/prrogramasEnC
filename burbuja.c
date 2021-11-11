#include <stdio.h>

int mostrarLista(int arreglo[]);
int swap(int *num1, int *num2);

int lista[]={3,102,24,0,-5,-35,57,11,6,79};

int main(){
    int i=0, cambios=0;
    puts("Lista Desordenada");

    do{
        mostrarLista(lista);
        cambios=0;
        for(i=0;i<=8;i++){
            if(lista[i] > lista[i+1]){
                swap(&lista[i],&lista[i+1]);
                cambios=cambios+1;
            }
        }
    }while(cambios >= 1);

    puts("\nLista Ordenada");
}

int mostrarLista(int arreglo[]){
    int i=0;
    printf("\n");
    for(i=0;i<=9;i++){
        printf("%d ",arreglo[i]);
    }
    return 0;
}

int swap(int *num1, int *num2){
        int aux;
        aux=(*num1);
        (*num1)=(*num2);
        (*num2)=aux;
        return 0;
}
