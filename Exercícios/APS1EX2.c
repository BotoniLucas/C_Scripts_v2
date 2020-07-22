/* Lucas Botoni de Souza
2) Reescreva o programa abaixo de forma que a matriz seja percorrida usando ponteiros: */

#include<stdio.h>
#include<stdlib.h>

main()
{             
      int matrix[50][50], *p;
      int i, j;
      for(i=0;i<50;i++){
          for(j=0;j<50;j++){              
                            printf("matrix[%d][%d]: \n", i, j); 
                            scanf("%d", &matrix[i][j]);
          }
      }
      p = &matrix[0][0];
      for(i=0;i<50;i++){
          for(j=0;j<50;j++){
                            printf("matrix[%d][%d]: %d \n", i, j, *(p++)); 
          }                  
      }
      system("pause");
}
      
