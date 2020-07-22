/*Lucas Botoni de Souza
3. Usando a estrutura do exercício 2, crie um vetor do Tipo Pessoa com tamanho igual a 5 
usando alocação dinâmica de memória com o malloc(). Apresentar todos os 
elementos deste vetor. 

 */

#include <stdio.h>
#include <stdlib.h>

typedef struct Telefone{
        int Residencial;
        int Celular;
        int Comercial;
}telefone;

typedef struct Endereco{
        telefone *Tel;
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
        int Idade;
        float Peso; 
        float Altura;
}pessoa;

main()
{
      pessoa *ficha;
      int i;
      ficha=(pessoa*)malloc(5*sizeof(pessoa));
      for(i=0; i<5; i++){
               ficha[i].End=(endereco*)malloc(5*sizeof(endereco));
               ficha[i].End->Tel=(telefone*)malloc(5*sizeof(telefone));
      }
      ficha->End=(endereco*)malloc(5*sizeof(endereco));
      ficha->End->Tel=(telefone*)malloc(5*sizeof(telefone));
      for(i=0; i<5; i++){
               printf("Entre com o nome da pessoa: ");
               setbuf(stdin, NULL);
               scanf("%[^\n]s", ficha->Nome);
               setbuf(stdin, NULL);
               printf("Digite o telefone residencial: ");
               scanf("%d", &ficha->End->Tel->Residencial);
               printf("Digite o telefone celular: ");
               scanf("%d", &ficha->End->Tel->Celular);
               printf("Digite o telefone comercial: ");
               scanf("%d", &ficha->End->Tel->Comercial);
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
      for(i=0; i<5; i++){
               printf("Dados da pessoa: %s, %d, %d, %d, %d, %.2f, %.2f, %s, %s, %s, %s, %s, %s \n % ", ficha[i].Nome, ficha[i].End->Tel->Residencial, ficha[i].End->Tel->Celular, ficha[i].End->Tel->Comercial, ficha[i].Idade, ficha[i].Peso, ficha->Altura, ficha[i].End->Rua, ficha[i].End->Numero, ficha[i].End->Bairro, ficha[i].End->CEP, ficha[i].End->Cidade, ficha[i].End->Pais);
      }
      for(i=0; i<5; i++){
               free(ficha[i].End);
      }
      free(ficha);      
      system("pause");
}
