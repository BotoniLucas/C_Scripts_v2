/*Lucas Botoni de Souza
1. Faça um programa em C que utilize os dados abaixo para construir uma Struct em C. 
Em seguida, deve-se armazenar os dados nessa Struct: 
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Endereco{
        char Rua[50]; 
        char Bairro[30];
        char Numero[10];
        char CEP[15];
        char Cidade[30];
        char Pais[20];
}endereco;

typedef struct Pessoa{
        char Nome[40]; 
        endereco *End;
        int Telefone;
        int Idade;
        float Peso; 
        float Altura;
}pessoa;

main()
{
      pessoa *ficha;
      int i;
      ficha=(pessoa*)malloc(sizeof(pessoa));
      ficha->End=(endereco*)malloc(sizeof(endereco));
      for(i=0; i<1; i++){
               printf("Entre com o nome da pessoa: ");
               setbuf(stdin, NULL);
               scanf("%[^\n]s", ficha->Nome);
               setbuf(stdin, NULL);
               printf("Digite o telefone: ");
               scanf("%d", &ficha->Telefone);
               printf("Digite a idade: ");
               scanf("%d", &ficha->Idade);
               printf("Digite o peso: ");
               scanf("%f", &ficha->Peso);
               printf("Digite a altura: ");
               scanf("%f", &ficha->Altura);
               printf("Digite a rua: ");
               scanf("%s", &ficha->End->Rua);
               printf("Digite o numero da casa: ");
               scanf("%s", &ficha->End->Numero);
               printf("Digite o bairro: ");
               scanf("%s", &ficha->End->Bairro);
               printf("Digite o CEP: ");
               scanf("%s", &ficha->End->CEP);
               printf("Digite a cidade: ");
               scanf("%s", &ficha->End->Cidade);
               printf("Digite o pais: ");
               scanf("%s", &ficha->End->Pais);
      }
      printf("Dados da pessoa: %s, %d, %d, %.2f, %.2f, %s, %s, %s, %s, %s, %s \n % ", ficha->Nome, ficha->Telefone, ficha->Idade, ficha->Peso, ficha->Altura, ficha->End->Rua, ficha->End->Numero, ficha->End->Bairro, ficha->End->CEP, ficha->End->Cidade, ficha->End->Pais);
      free(ficha->End);
      free(ficha);      
      system("pause");
}
      
        
