/*Lucas Botoni de Souza
5. Ler um arquivo (.txt) em C, considerando que este arquivo possui apenas n�meros 
inteiros no seguinte formato: 12349817839392...... 
Em seguida, armazenar o conte�do desse arquivo em uma matriz cuja dimens�o ser� 
fornecida pelo usu�rio. Se o n�mero de c�lulas da matriz for maior que a quantidade 
de n�meros do arquivo, as c�lulas restantes dever�o ser preenchidas com o valor -1. 
 */

#include <stdio.h>
#include <stdlib.h>

main()
{
     FILE *fp;
     char string[100], c;
     int i, cont=0, col, lin, j;
     if((fp = fopen("arquivo5.txt","w")) == NULL) {
            printf( "Erro na abertura do arquivo");
            exit(0);
     }
     printf("Entre com os numeros a serem gravados no arquivo:");
     gets(string);
     for(i=0; string[i]; i++){
           cont++;
           putc(string[i], fp);
     }
     fclose(fp);
     fp = fopen("arquivo5.txt","r"); 
     printf("Entre com as dimensoes da matriz LxC:\n");
     scanf("%d", &lin);
     scanf("%d", &col);
     int **mat;
     mat = (int**)malloc(lin*sizeof(int));
     for(i=0;i<lin;i++){
         mat[i]=(int*)malloc(col*sizeof(int));
     }
     for(i=0;i<lin;i++){
         for(j=0;j<col;j++){
                            if((c=getc(fp))!=EOF){
                                                  mat[i][j]=((int)c)-48;
                            }
                            else{
                                 mat[i][j]=-1;
                            }
                            printf("mat[%d][%d] = %d \n", i, j, mat[i][j]);
         }
     }
     fclose(fp);
     for(i=0;i<lin;i++){
                        free(mat[i]);
     }
     free(mat); 
     system("pause");
}
