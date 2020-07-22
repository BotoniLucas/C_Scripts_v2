/* Lucas Botoni de Souza
 10) Faça uma função que recebe dois vetores de inteiros, com qualquer número de elementos cada. Ela 
deve imprimir todos os valores presentes nos dois vetores. Ex: se v1={19, 5, 2, 6} e v2={5, 0, 9, 4, 18, 
56} deverá ser impresso somente o valor 5. */

#include<stdio.h>
#include<stdlib.h>

void igualvet(int v1[], int v2[], int m, int n)
{
     int *r, cont=0, i, j;
     r = (int*)malloc(m*sizeof(int));
     for(i=0;i<m;i++){
         for(j=0;j<n;j++){
                          if(v1[i]==v2[j]){
                                          r[cont]=v1[i];
                                          cont++;
                          }
         }
     }
     for(i=0;i<cont;i++){
                         printf("vet[%d]: %d \n", i, r[i]);
     }
     free(r);
}

main()
{
      int *vet1, *vet2, i, j, k;
      printf("Digite o tamanho do primeiro vetor: \n");
      scanf("%d", &j);
      vet1 = (int*)malloc(j*sizeof(int));
      for(i=0;i<j;i++){
                       printf("vet1[%d]: \n", i);
                       scanf("%d", &vet1[i]);
      }
      printf("Digite o tamanho do segundo vetor: \n");
      scanf("%d", &k);
      vet2 = (int*)malloc(k*sizeof(int));
      for(i=0;i<k;i++){
                       printf("vet2[%d]: \n", k);
                       scanf("%d", &vet2[i]);
      }
      igualvet(vet1,vet2,j,k);
      free(vet1);
      free(vet2);
      system("pause");
}
