#include <stdio.h>

int mostrarLista(int arreglo[]);
int lista[]={1,2,3,4,5,6,7,8,9,10};

int main(){
    mostrarLista(lista);
    return 0;
}

int mostrarLista(int arreglo[]){
    int i=0;
    //int arr[10];
    for(i=0;i<=9;i++){
            printf("\n%d",arreglo[i]);
    }
    return 0;
}
