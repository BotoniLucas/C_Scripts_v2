/* Lucas Botoni de Souza
14) Crie uma função que imprime o maior e menor valor de uma matriz qualquer de inteiros */

#include<stdio.h>
#include<stdlib.h>

int maiormenor (int **m, int lin, int col)
{
    int maior=0, menor=32000, i, j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
                           if(m[i][j]>maior){
                                             maior=m[i][j];
                           }
                           if(m[i][j]<menor){
                                             menor=m[i][j];
                           }
        }
    }
    printf("o maior elemento eh: %d \n", maior);
    printf("o menor elemento eh: %d \n", menor);
}

main()
{
      int i, j, **mat, l, c;
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
      maiormenor(mat, l, c);
      for(i=0;i<l;i++){
                       free(mat[i]);
     }
     free(mat);
     system("pause");
}
