/* Lucas Botoni de Souza
3) Com base no exercício 2, crie as seguintes funções:
   a) retorna o aluno que obteve mais faltas;
   b) retorna o Aluno com a maior média;
   c) retorna o Aluno com a pior média; */

#include<stdio.h>
#include<stdlib.h>

struct notas{
   float P1;
   float P2;
   float T;
};
typedef struct notas Nota;

struct aluno{
   char nome[40];
   int RA;
   Nota *notas;
   int faltas;
   float media;
};
typedef struct aluno Aluno;

float media(Aluno a[],int n)
{
    int i=0;
    for(i=0;i<n;i++){
                     a[i].media = (a[i].notas->P1 + a[i].notas->P2)/2;             
    }      
}

void imprime(Aluno a[],int n)
{
    int i=0;
    for(i=0;i<n;i++){
      printf("Aluno[%d] %s %d %d %.2f %.2f %.2f %.2f\n", i, a[i].nome,    
           a[i].RA, a[i].faltas, a[i].notas->P1, a[i].notas->P2, a[i].notas->T, a[i].media);              
    }      
} 

int faltas(Aluno a[],int n)
{
    int f=0, i, cont=0;
    for(i=0;i<n;i++){
                     if(a[i].faltas>f){
                                       f=a[i].faltas;
                                       cont=i;
                     }
    }
    return cont;
}

float maiormedia(Aluno a[], int n)
{
    int i, m=-32000, cont;
    for(i=0;i<n;i++){
                     if(a[i].media>m){
                                       m=a[i].media;
                                       cont=i;
                     }
    }
    return cont;
}
float menormedia(Aluno a[], int n)
{
    int i, m=32000, cont;
    for(i=0;i<n;i++){
                     if(a[i].media<m){
                                       m=a[i].media;
                                       cont=i;
                     }
    }
    return cont;
}
                     
main(){
   Aluno *aluno1;
   int i, r1, r2, r3;
   aluno1=(Aluno*)malloc(4*sizeof(Aluno));
   for(i=0; i<4; i++){
            aluno1[i].notas=(Nota*)malloc(sizeof(Nota));
   }
   for(i=0; i<4; i++){
       printf("Aluno %d\n",i);
       printf("Entre com o nome do Aluno: ");
       setbuf(stdin, NULL);   
       scanf("%[^\n]s", aluno1[i].nome);
       setbuf(stdin, NULL);  
       printf("Entre com o RA do Aluno: ");
       scanf("%d", &aluno1[i].RA);
       printf("Entre com as faltas do Aluno: ");
       scanf("%d", &aluno1[i].faltas);
       printf("Entre com a Nota 1 do Aluno: ");
       scanf("%f", &aluno1[i].notas->P1);    
       printf("Entre com a Nota 2 do Aluno: ");
       scanf("%f", &aluno1[i].notas->P2);
       printf("Entre com a Nota do Trabalho do Aluno: ");
       scanf("%f", &aluno1[i].notas->T);
       printf("\n");
   }
   printf("quem mais faltou eh o aluno %d \n\n", faltas(aluno1, 4));
   media(aluno1, 4);
   printf("quem tem a maior media eh o aluno %.2f \n\n", maiormedia(aluno1, 4));
   printf("quem tem a menor media eh o aluno %.2f \n\n", menormedia(aluno1, 4));
   imprime(aluno1, 4); 
   for(i=0; i<2; i++){
            free(aluno1[i].notas);
   }
   free(aluno1);      
   system("pause");
}
