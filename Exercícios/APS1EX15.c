/* Lucas Botoni de Souza
15) Crie uma matriz de inteiros com 5 linhas e 5 colunas. Em seguida, aumente a capacidade dessa matriz 
para 6 linhas e 6 colunas usando o comando realloc(), sendo que os elementos da nova coluna serão o 
somatório dos elementos de cada linha e os elementos da nova linha serão o somatório dos elementos de 
cada coluna. */

#include<stdio.h>
#include<stdlib.h>

void somalc(int **m)
{
     int i, j;
     for(i=0;i<5;i++){
                      m[i][5]=0;
         for(j=0;j<5;j++){
                          m[i][5] += m[i][j];
         }
     }
     for(j=0;j<5;j++){
                      m[5][j]=0;
         for(i=0;i<5;i++){
                          m[5][j] += m[i][j];
         }
     }
     m[5][5]=0;
     for(i=0;i<6;i++){
         for(j=0;j<6;j++){
                          printf("mat[%d][%d}: %d \n", i, j, m[i][j]);
         }
     }
}

main()
{
      int **mat, i, j, c;
      mat=(int**)malloc(5*sizeof(int));
      for(i=0;i<5;i++){
                       mat[i]=(int*)malloc(5*sizeof(int));
      }
      for(i=0;i<5;i++){
          for(j=0;j<5;j++){
                           printf("mat[%d][%d]: \n", i, j);
                           scanf("%d", &mat[i][j]);
          }
      }
      for(i=0;i<6;i++){
                       mat[i]=(int*)realloc(mat[i], 6*sizeof(int));
      }
      mat=(int**)realloc(mat, 6*sizeof(int));
      for(i=5;i<6;i++){
                       mat[i]=(int*)malloc(6*sizeof(int));
      }
      somalc(mat);
      for(i=0;i<6;i++){
                       free(mat[i]);
      }
      free(mat);
      system("pause");
      }
