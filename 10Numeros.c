#include <stdio.h>
int main(){
  int i=0;
  int lista[9];
  int acumulador = 0;

  for(i=0;i<=9;i++){
  printf("Ingrese el valor %d\n de lista",i);
  scanf("%d",&lista[i]);
  acumulador = acumulador + lista[i];
  }

  printf("Los valores de la lista son: \n");
  for(i=0;i<10;i++){
  printf("%d\n",lista[i]);
  }

  printf("La suma de lista es: %d\n",acumulador);
  return 0;
}
