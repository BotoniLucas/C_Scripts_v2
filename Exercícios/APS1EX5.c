/* Lucas Botoni de Souza
5) Faça uma função recursiva que permita somar os elementos de um vetor de inteiros de tamanho igual a 
10. O vetor deverá ser preenchido inicialmente pelo usuário. */

#include<stdio.h>
#include<stdlib.h>

int soma(int *v, int n)
{
    if(n==0)
    return 0;
    else
    return v[n-1] + soma(v, n-1);
}
    
main()
{
      int vet[10], i , r, *pv, tam=10;
      for(i=0;i<10;i++){
                        printf("vet[%d]: \n", i);
                        scanf("%d", &vet[i]);
      }
      pv = &vet;
      r = soma(vet, tam);
      printf("a soma eh %d \n", r);
      system("pause");
}
