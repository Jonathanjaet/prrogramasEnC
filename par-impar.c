#include <stdio.h>

int main(){
        int num=0, resultado=0;

        printf("Este programa evalua si un numero es par o impar\n\n");
        printf("Ingresa un numero:  ");
        scanf("%d",&num);

        resultado = num % 2;

        if(resultado==0){
                printf("\nEl numero ingresado es par\n");
        }
        else{
                printf("\nEl numero ingresado es impar\n");
        }

        return 0;
}
