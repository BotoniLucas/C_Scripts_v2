/* Lucas Botoni de Souza
1) Crie um vetor de tamanho 4 para a estrutura aluno.
   Modifique a estrutura aluno adicionando:
   float media;
   Construa uma função que receba esse vetor e calcule a média
   das notas P1 e P2 para cada aluno.
   Imprime todos os valores dos alunos, inclusive a média, usando
   uma função. */

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
   Nota notas;
   int faltas;
   float media;
};
typedef struct aluno Aluno;

void media(Aluno a[],int n)
{
    int i=0;
    for(i=0;i<n;i++){
                     a[i].media = (a[i].notas.P1 + a[i].notas.P2)/2;             
    }      
}

void imprime(Aluno a[],int n)
{
    int i=0;
    for(i=0;i<n;i++){
      printf("Aluno[%d] %s %d %d %.2f %.2f %.2f %.2f\n", i, a[i].nome,    
           a[i].RA, a[i].faltas, a[i].notas.P1, a[i].notas.P2, a[i].notas.T, a[i].media);              
    }      
}     

main(){
   Aluno aluno1[4];
   int i;
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
       scanf("%f", &aluno1[i].notas.P1);    
       printf("Entre com a Nota 2 do Aluno: ");
       scanf("%f", &aluno1[i].notas.P2);
       printf("Entre com a Nota do Trabalho do Aluno: ");
       scanf("%f", &aluno1[i].notas.T);
       printf("\n");
   }
   media(aluno1, 4);
   imprime(aluno1, 4);       
   system("pause");
}
