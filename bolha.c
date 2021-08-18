// Ordena bolha/pedregulho
#include <stdio.h>
void imprimir (int X[], int n) {
  int i;
  printf("(");
  for (i=0; i<n; i++) printf("%3d ", X[i]);
  printf(")\n");
  }
void ordPedregulho (int V[], int n) {
  int i, j, aux;
  for (i=0; i<n; i++)
    for (j=0; j<n-i-1; j++)
      if (V[j]>V[j+1]) { // troque-os
        aux = V[j]; // presevar V[j]
        V[j] = V[j+1];
        V[j+1] = aux; }
  }
  
int main (void) {
  int Y[] = { 4, 2, 3, 0, 9, 3, 5, 7 }; // definir vetor dados
  imprimir(Y, 8);
  ordPedregulho(Y, 8);
  imprimir(Y, 8);
  
  return 0;
}
   
