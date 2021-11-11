#include <stdio.h>

int mostrarLista(int arreglo[]);
int swap(int *num1, int *num2);

int lista[]={3,102,24,0,-5,-35,57,11,6,79};

int main(){
    int i=0, cambios=1;
    puts("Lista Desordenada");

    while(cambios >= 1){
        mostrarLista(lista);
        cambios=0;
        for(i=0;i<=8;i++){
            if(lista[i] > lista[i+1]){
                swap(&lista[i],&lista[i+1]);
                cambios=cambios+1;
            }
        }
    }

    puts("\nLista Ordenada");
}
