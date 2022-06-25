/*
  Tecnologo en Informatica - LATU
  Principios de Programacion - 2022
*/

#include <stdio.h>
#include "tarea.h"

void leerMatriz(int m[20][20]){
  for (int i = 0; i < 20*20; i++)
    scanf("%d", m[0][i]);
}

int main() {
  int matriz[20][20];
  int n;
  scanf("%d", &n);
  
  while(n != -1){
    switch(n){
      case 1 :
        descrifrar();
        break;
      case 2 :
        leerMatriz(matriz);
        printf("%d", maxProd3(matriz));
        break;
    }
    scanf("%d", &n);
  }
  
  return 0;
}
