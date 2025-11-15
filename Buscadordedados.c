#include <stdio.h>

#define BANCO1 5
#define BANCO2 5

int main(){

int dados[BANCO1][BANCO2];
int alvo = 3; // Caso decida buscar outro numero, altere essa váriavel
int encontrado = 0;
int var = 1;

  for (int i = 0; i < BANCO1; i++) {      
        for (int j = 0; j < BANCO2; j++) {
            dados[i][j] = var;
            var++;
            printf("%d \t", dados[i][j]);
        }
      printf("\n");
    }

  for (int i = 0; i < BANCO1; i++) {      
        for (int j = 0; j < BANCO2; j++) {
            if (dados[i][j] == alvo) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", alvo, i, j);
                encontrado = 1;
                break;
            }
        }
        if (encontrado) break;
    }
 
   
if (!encontrado) {
        printf("Elemento %d não encontrado na matriz\n", alvo);
    }




return 0;
}