#include <stdio.h>

int main(){
    int lista[5]={3,67,2,0,-2};
    int i=0, residuo=0;
    printf("Mostrando valores del arreglo del ultimo valor al primero\n\n");
    for(i=4;i>=0;i--){
        printf("%d",lista[i]);
        residuo=lista[i] % 2;
        if(residuo==0){
            printf("\nEste numero es par\n");
        }
        else{
            printf("\nEste numero no es par\n");
        }
    }
}
