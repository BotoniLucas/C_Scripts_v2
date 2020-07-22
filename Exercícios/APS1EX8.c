/* Lucas Botoni de Souza
 8) Dado um vetor com números ordenados de forma crescente, faça uma função que imprime somente 
os números que não sejam repetidos. */

#include<stdio.h>
#include<stdlib.h>

void invertvet(int vet[],int n)
{
     int *p, i, j;
     p=(int*)malloc(n*sizeof(int));
     for(i=0;i<n;i++){
                      for(j=i+1;j<n;j++){
                                         if(vet[i]==vet[j]){
                                         vet[j]=0;
                                         }
                      }
                                  p[i]=vet[i];
                      
     } 
     printf("\n");
     for(i=0;i<n;i++){
                      if(p[i]!=0){
                      printf("%d \n", p[i]);
                      }
     }
     free(p);
}

main()
{
      int t, *vet, i;
      printf("Digite o numero de termos: \n");
      scanf("%d",&t);
      vet = (int*)malloc(t*sizeof(int));
      printf("Digite os elementos de forma crescente:\n\n");
      for(i=0;i<t;i++){
                       printf("vet[%d]: \n", i);
                       scanf("%d",&vet[i]);
      }
      invertvet(vet, t);
      system("pause");
}
