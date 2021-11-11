#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

float suma(float n1, float n2);
float resta(float n1, float n2);
float multiplicacion(float n1, float n2);
float division(float n1, float n2);

float num1=0,num2=0,result=0;

int main(){
    int opt=0;
    bool bandera = false;
    float resultado=0;

    while(bandera == false){
        printf("\n\n");
        printf("Menu\n\n");
        printf("1- Suma\n2- Resta\n3- Multiplicacion\n4- Division\n5- Salir ");
        printf("\n\nElige una opcion... ");
        scanf("%d",&opt);

        switch(opt){
                case 1:
                    printf("Ingresa el primer numero :" );
                    scanf("%f",&num1);
                    printf("\nIngresa el segundo numero :" );
                    scanf("%f",&num2);
                    resultado = suma(num1,num2);
                    printf("\nEl resultado de la operacion es %f\n",resultado);
                    break;
                case 2:
                    printf("Ingresa el primer numero :" );
                    scanf("%f",&num1);
                    printf("\nIngresa el segundo numero :" );
                    scanf("%f",&num2);
                    resultado = resta(num1,num2);
                    printf("\nEl resultado de la operacion es %f\n",resultado);
                    break;
                case 3:
                    printf("Ingresa el primer numero :" );
                    scanf("%f",&num1);
                    printf("\nIngresa el segundo numero :" );
                    scanf("%f",&num2);
                    resultado = multiplicacion(num1,num2);
                    printf("\nEl resultado de la operacion es %f\n",resultado);
                    break;
                case 4:
                    printf("Ingresa el primer numero :" );
                    scanf("%f",&num1);
                    printf("\nIngresa el segundo numero :" );
                    scanf("%f",&num2);
                    resultado = division(num1,num2);
                    printf("\nEl resultado de la operacion es %f\n",resultado);
                    break;
                case 5:
                    bandera = true;
                    printf("\nHasta Luego\n");
                    break;
                default:
                    printf("\nOpcion invalida\n");
                    break;
        }
    }
    return 0;
}
float suma(float n1,float n2){
    result = n1+n2;
    return result;
}
float resta(float n1,float n2){
    result = n1-n2;
    return result;
}
float multiplicacion(float n1,float n2){
    result = n1*n2;
    return result;
}
float division(float n1,float n2){
    result = n1/n2;
    return result;
}
