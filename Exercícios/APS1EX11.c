/* Lucas Botoni de Souza
11) Crie um vetor de inteiros com 10 elementos. Em seguida, aumente a capacidade de vetor para 15 
usando o comando realloc(). As novas 5 posições geradas deverão ser preenchidas com o fatorial dos 
elementos contidos nos índices ímpares no intervalo de 1 a 10 do vetor. Imprime o vetor resultante.*/

#include<stdio.h>
#include<stdlib.h>

int fatvet(int v)
{
    if(v==0 || v==1){
                     return 1;
    }
    else{
         return (v * fatvet(v-1));
    }    
}
     
main()
{
      int *vet, i, j=1;
      vet = (int*)malloc(10*sizeof(int));
      for(i=0;i<10;i++){
                       printf("vet[%d]: \n", i);
                       scanf("%d", &vet[i]);
      }
      vet=(int*)realloc(vet, 15*sizeof(int));
      for(i=10;i<15;i++){
                         printf("vet[%d]: %d \n", i, fatvet(vet[j]) );
                         j+=2;
      }
      free(vet);
      system("pause");
}
      
      
      
