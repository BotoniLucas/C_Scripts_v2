/* Lucas Botoni de Souza
4) Usando a estrutura do exercício 2,
   Crie mais uma estrutura com os dados do aluno:
   char endereco[40];
   int  telefone;
   int RG;   
   crie um vetor de tamanho 4 para a estrutura aluno usando alocação dinâmica de memória.
   Adicione valores para a nova estrutura criada.   
   Imprime todos os valores dos alunos, inclusive os valores da nova estrutura.  */

#include<stdio.h>
#include<stdlib.h>

struct notas{
   float P1;
   float P2;
   float T;
};
typedef struct notas Nota;

struct dados{
        char endereco[40];
        int tel;
        int RG;
        int CPF;
        };
typedef struct dados Dados;
        
struct aluno{
       char nome[40];
       int RA;
       Nota *notas;
       Dados *dados;
       int faltas;
       float media;
};
typedef struct aluno Aluno;

void media(Aluno a[],int n)
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
      printf("Aluno[%d] %s %d %d %.2f %.2f %.2f %.2f %d $s %d %d \n", i, a[i].nome,    
           a[i].RA, a[i].faltas, a[i].notas->P1, a[i].notas->P2, a[i].notas->T, a[i].media,
           a[i].dados->tel, a[i].dados->endereco, a[i].dados->CPF, a[i].dados->RG);              
    }      
}     

main(){
   Aluno *aluno1;
   int i;
   aluno1=(Aluno*)malloc(4*sizeof(Aluno));
   for(i=0; i<4; i++){
            aluno1[i].notas=(Nota*)malloc(sizeof(Nota));
            aluno1[i].dados=(Dados*)malloc(sizeof(Dados));
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
       printf("Entre com o endereco do Aluno: ");
       setbuf(stdin, NULL);   
       scanf("%[^\n]s", aluno1[i].dados->endereco);
       setbuf(stdin, NULL);  
       printf("Entre com o telefone do Aluno: ");
       scanf("%d", &aluno1[i].dados->tel);
       printf("Entre com o CPF do Aluno: ");
       scanf("%d", &aluno1[i].dados->CPF);
       printf("Entre com o RG do Aluno: ");
       scanf("%d", &aluno1[i].dados->RG);
       printf("\n");
   }
   media(aluno1, 4);
   imprime(aluno1, 4); 
   for(i=0; i<4; i++){
            free(aluno1[i].notas);
            free(aluno1[i].dados);
   }
   free(aluno1);      
   system("pause");
}
