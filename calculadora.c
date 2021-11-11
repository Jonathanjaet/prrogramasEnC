#include <stdio.h>

int main(){
    int i=0, bandera=0;
    int num1=0,acumulador=0;
    int lista[]={3,67,2,0,-2,7,3,10,101,3};

    puts("\nIngresa el numero que estas buscando: ");
    scanf("%d",&num1);

    for(i=0;i<=9;i++){
        if(lista[i] == num1){
            bandera = 1;
            acumulador = acumulador + 1;
        }
    }

    if(bandera != 1){
        puts("\nEl numero que buscas no se encuentra en la lista");
    }
    else {
        puts("\nEl numero que buscas si se encuentra en la lista");
        printf("\nEl numero que buscas se encontro %d veces en la lista\n",acumulador);
    }
}
