#include <stdio.h>
int main ()
{

   int a = 1,num;
   printf("Enter number:");
   scanf("%d",&num);
   while( a <= 10 )
   {
      printf("%d \n",(num*a));
      a++;
   }
   return 0;
}
