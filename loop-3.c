#include <stdio.h>

int main()
{
   int n;
   int sum =0;

   scanf("%d", &n);
   // printf("%d\n", n);

   for (int i = 1; i <= n; i = i + 1)
   {
      // printf("%d\n", i);
      sum = sum +i;
      // printf("%d\n",sum);
   }

   printf("%d\n",sum);

   return 0;
}