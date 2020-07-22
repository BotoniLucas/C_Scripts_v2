/*Lucas Botoni de Souza
4. Criar uma arquivo (.txt) em C e armazenar os números 123456789. Em seguida, alterar 
o conteúdo deste arquivo de forma que apenas os números pares fiquem 
armazenados. 
 */

#include <stdio.h>
#include <stdlib.h>
main()
{
     FILE *fp;
     char string[20];
     int i;
     if((fp = fopen("arquivo.txt","w")) == NULL) {
            printf( "Erro na abertura do arquivo");
            exit(0);
     }
     printf("Entre com a string a ser gravada no arquivo:");
     gets(string);
     for(i=0; string[i]; i++) putc(string[i], fp);
     fclose(fp);
     if((fp = fopen("arquivo.txt","w")) == NULL) {
            printf( "Erro na abertura do arquivo");
            exit(0);
     }
     for(i=0; string[i]; i++) if(string[i]%2==0) putc(string[i], fp);
     fclose(fp);
     system("pause");
}
