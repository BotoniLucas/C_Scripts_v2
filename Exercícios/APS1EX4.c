/* Lucas Botoni de Souza
4) Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci. Alguns 
números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89... 
 */

#include<stdio.h>
#include<stdlib.h>

int f(int n)
{
            if(n==1){
                     return 0;
            }
            if(n==2){
                             return 1;
            }
            else{
                 return f(n-1) + f(n-2);
            } 
}
 
main()
{
      int x,i;
      printf("Digite a quantidade de termos: \n");
      scanf("%d", &x);
      printf("A sequencia eh: \n");
      for(i=1; i<=x; i++)
      printf("%d ", f(i));
      system("pause");
} 
