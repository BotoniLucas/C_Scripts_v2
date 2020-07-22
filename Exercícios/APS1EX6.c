/* Lucas Botoni de Souza
6) Assumindo-se que se tenha um vetor de inteiros com tamanho M. Implemente as seguintes funções 
que receba o vetor como parâmetro: 
• mostrar os valores do vetor; • retornar o maior valor deste vetor; • retornar a média dos valores do vetor; 
• função para dizer se existem valores iguais no vetor. */

#include<stdio.h>
#include<stdlib.h>

int printvet(int v[], int n)
{
    int i;
    for(i=0;i<n;i++){
                     printf("vet[%d]: %d \n", i, v[i]);
    }
}

int maiorvet(int n, int v[]){
     if (n==1){
               return v[0];
     }
     else{
          int x;
          x = maiorvet(n-1,v);
          if(x>v[n-1]){
                       return x;
          }
          else{
               return v[n-1];
          }
     }
}
float mediavet(int v[], int n, int tam)
{
    if(n<=0){
             return 0;
    }
    else{
         return v[n-1]/(float)tam + mediavet(v, n-1, tam);
    }
}

int repetvet(int v[],int n)
{
    int cont=0, temp, i;
    temp = v[0];
    for (i=0;i<n;i++){
    if(v[i]==temp){
                       cont++;
    }
    else{
         if(cont>1){
                    printf("O valor %i repete-se %i vezes \n", temp, cont);
                    cont=1;
         }
         temp=v[i];
    }
}

if(cont>1){
           printf("O valor %d repetiu %d vezes \n", temp, cont);
}
if(cont==0){
            printf("Nenhum valor foi repetido \n");
}
}


main()
{
      int t, i, r1, *vet, t2;
      printf("Digite o tamanho do vetor: \n");
      scanf("%d", &t);
      t2=t;
      vet=(int*)malloc(t*sizeof(int));
      for(i=0;i<t;i++){
                       printf("vet[%d]: \n", i);
                       scanf("%d", &vet[i]);
      }
      printvet(vet, t);
      maiorvet(t, vet);
      printf("O maior valor eh %d \n", maiorvet(t, vet));
      printf("O valor da media eh %.1f \n", mediavet(vet, t, t2));
      repetvet(vet, t);
      free(vet);
      system("pause");
}
                       


 
