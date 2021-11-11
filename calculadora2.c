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

        if(opt >= 1 && opt <= 4){
            printf("Ingresa el primer numero :" );
            scanf("%f",&num1);
            printf("\nIngresa el segundo numero :" );
            scanf("%f",&num2);

            if(opt == 1){
                resultado = suma(num1,num2);
                //free(*opt);
            }
            else if(opt == 2){
                resultado = resta(num1,num2);
            }
            else if(opt == 3){
                resultado = multiplicacion(num1,num2);
            }
            else{
                resultado = division(num1,num2);
            }
          
            printf("\n\nEl resultado de la operacion es: %f ",resultado);
          
        }
        else if(opt == 5){
            printf("\nHasta Luego \n");
            //break;
            bandera = true;

        }
        else{
            printf("\nOpcion invalida\n");
        }

        //sleep(3);
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
