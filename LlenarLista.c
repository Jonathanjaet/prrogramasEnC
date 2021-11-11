#include <stdio.h>

int main(){
    int MAX=0,i=0,lista[]={};

    printf("\nCuantos elementos quieres ingresar a la lista? ");
    scanf("%d",&MAX);

    printf("%d\n",MAX);
    for(i=0;i<=MAX;i++){
        printf("\n valor de max en for %d\n",MAX);
        printf("\nIngresa un valor: ");
        scanf("%d",&lista[i]);
        printf("\nvalor de i es %d ");
    }

    for(i=0;i<=MAX-1;i++){
        printf("%d ",lista[i]);
    }
    return 0;
}

/*
int mostrarLista(int list){
    int i=0,size=0;
    size = (sizeof(list)/sizeof(list[0]))-1;

    for(i=0;i<=size;i++){
        printf("%d ",list[i]);
    }
    return 0;
}*/
