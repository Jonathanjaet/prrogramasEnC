#include <stdio.h>
#define N 10
int main(){
        int num,resultado = 0;
        int impares[N];
        int pares[N];
        int i=0;
        int contadorA, contadorB;
        printf("Este programa determina si los números ingresados son pares o impares\n");
        for(i = 0; i < N; i++){
                printf("Ingresa un número entero %d: \n",i+1);
                scanf("%d",&num);

                resultado = num % 2;
                if(resultado==0){
                        pares[contadorA] = num;
                        contadorA++;
                }
                else{
                        impares[contadorB] = num;
                        contadorB++;
                }
        }
        for(i = 0;i < contadorA; i++){
                if(pares[i] > 0){
                        num=pares[i];
                        printf("El número par %d: %d\n",i+1,num);
                }
        }
        for(i = 0;i < contadorB; i++){
                if(impares[i] > 0){
                        num=impares[i];
                        printf("El número impar %d: %d\n",i+1,num);
                }
        }
        return 0;
}
