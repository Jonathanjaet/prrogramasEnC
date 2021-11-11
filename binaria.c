#include <stdio.h>
#include <stdbool.h>

int main(){
    int lista[]={-2,0,7,32,40};
    int Li=0, Ls=(sizeof(lista)/sizeof(lista[0]))-1;
    int medio=0,num=0;
    bool Encontrado=false;

    printf("\nIngresa el numero que quieres buscar: ");
    scanf("%d",&num);

    // Inicio While
    while(Li <= Ls && Encontrado == false ){
        medio=(Li+Ls)/2;
        if(num == lista[medio]){
            Encontrado = true;
        }else if(num > lista[medio]){
            Li=medio+1;
        }else{
            Ls=medio-1;
        }
    } // Fin While

    if(Encontrado == true){
        printf("\nEl numero si se encuentra en la lista\n");
    }else{
       printf("\nEl numero no se encuentra en la lista\n");
    }
    return 0;
}
