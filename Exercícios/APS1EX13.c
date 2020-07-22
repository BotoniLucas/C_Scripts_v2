/* Lucas Botoni de Souza
13) Crie uma função que retorne o índice da linha da matriz que possui a maior soma dos elementos. */

#include<stdio.h>
#include<stdlib.h>

void indvet(int **m, int lin, int col)
{
    int *p, i, j, c=0, indice;
    p = (int*)malloc(col*sizeof(int));
    for(i=0;i<lin;i++){
                     p[i]=0;
                     for(j=0;j<col;j++){
                                      p[i] = p[i] + m[i][j];
       }
    }
    for(i=0;i<lin;i++){
                     printf("soma[%d]: %d \n", i , p[i]);
    }
    for(i=0;i<lin;i++){
                     if(p[i]>c){
                                c = p[i];
                                indice=i;
                     }
    }
    printf("o indice da linha com maior soma eh %d \n", indice);
} 

main()
{
      int **mat, l, c, i, j;
      printf("Digite o numero de linhas: \n");
      scanf("%d",&l);
      printf("Digite o numero de colunas: \n");
      scanf("%d",&c);
      mat = (int**)malloc(l*sizeof(int));
      for(i=0;i<l;i++){
                       mat[i]=(int*)malloc(c*sizeof(int));
      }
      for(i=0;i<l;i++){
          for(j=0;j<c;j++){
                           printf("mat[%d][%d]: \n", i, j);
                           scanf("%d",&mat[i][j]);
         }
      }
      indvet(mat, l, c);
      for(i=0;i<l;i++){
                       free(mat[i]);
      }
      free(mat);
      system("pause");
}
