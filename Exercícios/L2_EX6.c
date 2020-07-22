/*Lucas Botoni de Souza
6. Ler 20 números inteiros de um arquivo (.txt ) (Crie o arquivo na mão antes da execução 
do código). Armazenar os elementos desse arquivo em um vetor. Em seguida, alterar a 
ordem dos elementos do vetor, de forma que o primeiro elemento deverá ser o 
último, o segundo deverá ser o penúltimo, e assim por diante. Imprimir o vetor 
resultante. */

#include <stdio.h>
#include <stdlib.h>

main()
{
     FILE *fp;
     char *vet, aux;
     int i;
     char string[20], c;
     if((fp = fopen("arquivo6.txt","w")) == NULL) {
            printf( "Erro na abertura do arquivo");
            exit(0);
     }
     printf("digite os 20 numeros inteiros \n");
     gets(string);
     for(i=0; string[i]; i++){
              putc(string[i], fp);
     }
     fclose(fp);
     fp = fopen("arquivo6.txt","r");
     vet = (int*)malloc(20*sizeof(int));
     for(i=0;i<20;i++){
                       vet[i]=getc(fp);
     } 
     for(i=0;i<10;i++){
                       aux=vet[i];
                       vet[i]=vet[19-i];
                       vet[19-i]=aux;
     }
     for(i=0;i<20;i++){
                       printf("vet[%d]: %c \n", i, vet[i]);
     }
     free(vet);
     fclose(fp);
     system("pause");
}  
