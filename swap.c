#include <stdio.h>

int main(){
        int A=0,B=0,C=0;
        printf("Ingresa el valor de A: ");
        scanf("%d",&A);
        printf("\n");
        printf("Ingresa el valor de B: ");
        scanf("%d",&B);
        printf("\n");

        printf("El valor inicial de A es: %d y el valor inicial de B es %d \n",A,B);
        C=A;
        A=B;
        B=C;

        printf("\n");
        printf("El valor final de A es %d y el valor final de B es %d \n",A,B);

        return 0;
}
