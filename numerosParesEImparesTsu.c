#include <stdio.h>

int num=0;
int cal=0;
int pares[10];
int impares[10];
int par;
int imp;

int main() {
  for(int i=0; i<10; i++){
    printf("Dame un numero entero\n");
    scanf("%d", &num);
    cal=num%2;
    if(cal==0){
      pares[par]=num;
      par++;
    }
    else{
      impares[imp]=num;
      imp++;
    }
  }
  if(par>0){
    printf("\nLos numeros pares son:\n");
  }
  else{
    printf("No hay numeros pares.\n");
  }
  for(int i=0; i<par; i++){
    if(pares[i]>0){
      num=pares[i];
      printf("%d\n",num);
    }
  }
  if(imp>0){
    printf("\nLos numeros impares son:\n");
  }
  else{
      printf("\n\nNo hay numeros impares.");
    }

  for(int i=0; i<imp; i++){
    if(impares[i]>0){
      num=impares[i];
      printf("%d\n",num);
    }
  }
    return 0;
}\
