/*Lucas Botoni de Souza
2. Modifique o exercício 1, considerando agora três Structs, conforme ilustrado a seguir: 
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
      ficha=(pessoa*)malloc(sizeof(pessoa));
      ficha->End=(endereco*)malloc(sizeof(endereco));
      ficha->End->Tel=(telefone*)malloc(sizeof(telefone));
      for(i=0; i<1; i++){
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
      printf("Dados da pessoa: %s, %d, %d, %d, %d, %.2f, %.2f, %s, %s, %s, %s, %s, %s \n % ", ficha->Nome, ficha->End->Tel->Residencial, ficha->End->Tel->Celular, ficha->End->Tel->Comercial, ficha->Idade, ficha->Peso, ficha->Altura, ficha->End->Rua, ficha->End->Numero, ficha->End->Bairro, ficha->End->CEP, ficha->End->Cidade, ficha->End->Pais);
      free(ficha->End);
      free(ficha);      
      system("pause");
}
