/* Lucas Botoni de Souza
9) Função que altera a ordem dos elementos de um vetor do tipo inteiro de 20 posições. O primeiro 
elemento deverá ser o último, o segundo deverá ser o penúltimo, e assim por diante. Imprimir o vetor 
antes e depois da inversão. */

#include<stdlib.h>
#include<stdio.h>

void invert(int v[])
{
     int j , *v1, aux;
     v1 = (int*)malloc(20*sizeof(int)); 
     for(j=0;j<20;j++){
                       v1[j]=v[19-j];
                       printf("vet[%d]: %d\n", j, v1[j]);
     }
     free(v1);       
}

main()
{
      int *vet, i;
      vet = (int*)malloc(20*sizeof(int));
      for(i=0;i<20;i++){
                        printf("vet[%d]: \n", i);
                        scanf("%d", &vet[i]);
      }
      printf("\n");
      for(i=0;i<20;i++){
                        printf("vet[%d]: %d \n", i, vet[i]);
      }
      printf("\n\n\n");
      invert(vet);
      free(vet);
      system("pause");
}
