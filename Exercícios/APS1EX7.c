/* Lucas Botoni de Souza
7) Fazer troca de posi��o de elementos de um vetor usando uma vari�vel auxiliar. Os �ndices a serem 
trocados dever�o ser fornecidos pelo usu�rio. */

#include<stdio.h>
#include<stdlib.h>

int trocavet(int *v, int a, int b, int c)
{
    int aux=0, j;
    aux=v[a];
    v[a]=v[b];
    v[b]=aux;
    for(j=0;j<c;j++){
                     printf("v[%d]: %d \n", j, v[j]);
    }
}

main()
{
      int *vet, t, t1, i, t2;
      printf("Digite o tamanho do vetor: \n");
      scanf("%d", &t);
      vet = (int*)malloc(t*sizeof(int));
      for(i=0;i<t;i++){
                       printf("vet[%d]: \n", i);
                       scanf("%d", &vet[i]);
      }
      printf("Digite as 2 posi��es que quer trocar: \n");
      scanf("%d", &t1);
      scanf("%d", &t2);
      trocavet(vet,t1,t2,t);
      free(vet);
      system("pause");
}
      
