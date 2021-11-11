#include <stdio.h>
#define limones 6

int main()
{

        int i=0;

        printf("Tomar una jarra de 2 litros \n");
        printf("Llenar la jarra de agua a 4<F2>5 partes de su capacidad\n");
        printf("Tomar %d limones \n",limones);
        for(i=1;i<=limones;i++){
                printf("Cortando limon %d \n",i);
                printf("Exprimir limon %d \n",i);
        }

        for(i=1;i<=4;i++){
                printf("Agregando cucharada %d de azucar \n",i);
        }

        printf("Disolviendo azucar \n");
        printf("Lisot, el agua de limon está preparada \n");

        return 0;

}
