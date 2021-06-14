#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    puts(setlocale(LC_ALL,"Portuguese"));

    int matriz[3][3];

   int i, j;
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("Digite o valor para matriz[%d][%d]:", i, j);
         scanf("%d", &matriz[i][j]);
      }
   }
   printf("Elementos da matriz:\n");
   for(i=0; i<3; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", matriz[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   printf("Elementos da matriz multiplicada por 5:\n");
   for(i=0; i<3; i++) {
      for(j=0; j<3; j++) {
         printf("%d ", matriz[i][j] * 5);
         if(j==2){
            printf("\n");
         }

      }
   }

    return 0;
}
