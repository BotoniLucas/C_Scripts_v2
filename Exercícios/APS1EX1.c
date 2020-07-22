#include<stdio.h>
#include<stdlib.h>

main()
{
      int y, *p, x;
      y = 0;
      p = &y;
      x = *p;
      x = 4;
      printf("x = %d \n", x);
      (*p)++;
      printf("*p = %d \n", *p);
      x--;
      printf("x = %d \n", x);
      (*p) += x;
      printf("y = %d \n", y);
      system("pause");
}
      
