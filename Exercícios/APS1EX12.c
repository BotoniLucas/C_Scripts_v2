/* Lucas Botoni de Souza
12) Criar funções para inicializar as matrizes NxN que obedeça as seguintes definições: 
• os elementos da diagonal principal tenham valor 1 e os demais devem ter valor 0; 
• cada coluna possua o mesmo valor; • cada elemento seja a soma dos índices da linha com a coluna; */

#include<stdio.h>
#include<stdlib.h>

void ident(int **m, int lc)
{
     int i, j;
     for(i=0;i<lc;i++){
          for(j=0;j<lc;j++){
                           if(i==j){
                                    m[i][j]=1;
                           }
                           else{
                                m[i][j]=0;
                           }
          }
     }
     printf("\n");
     for(i=0;i<lc;i++){
         for(j=0;j<lc;j++){
                           printf("mat[%d][%d]: %d \n", i, j, m[i][j]);
          }
     }                               
}
void colmat(int **m, int lc)
{
     int i, j, *n;
     printf("Digite um numero para cada coluna: \n");
     for(i=0;i<lc;i++){
         scanf("%d", &n[i]);
     }
     for(i=0;i<lc;i++){
        for(j=0;j<lc;j++){
                          m[j][i]=n[i];
        }                       
     }
     for(i=0;i<lc;i++){
         for(j=0;j<lc;j++){
                           printf("mat[%d][%d]: %d \n", i, j, m[i][j]);
          }
     }
}
void soma(int **m, int lc)
{
     int i, j;
     printf("m[i][j]=i+j \n");
     for(i=0;i<lc;i++){
         for(j=0;j<lc;j++){
                           m[i][j]=i+j;
         }
     }
     for(i=0;i<lc;i++){
          for(j=0;j<lc;j++){
                            printf("mat[%d][%d]: %d \n", i, j, m[i][j]);
          }
     }
}

main()
{
      int **mat, l, i, j;
      printf("Digite o numero de linhas e colunas: \n");
      scanf("%d", &l);
      mat=(int**)malloc(l*sizeof(int));
      for(i=0;i<l;i++){
                       mat[i]=(int*)malloc(l*sizeof(int));
      }
      for(i=0;i<l;i++){
          for(j=0;j<l;j++){
                           printf("mat[%d][%d]: \n",i,j);
                           scanf("%d", &mat[i][j]);
          }
      }
      ident(mat, l);
      printf("\n");
      colmat(mat, l);
      printf("\n");
      soma(mat, l);
      for(i=0;i<l;i++){
                       free(mat[i]);
      }
      free(mat);
      system("pause");
}
