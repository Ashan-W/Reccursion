#include<stdio.h>
 
int fibo(int);
 
int main()
{
   int n, i = 0, c;
 
   scanf("%d",&n);
 
   printf("Fibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", fibo(i));
      i++; 
   }
 
   return 0;
}
 
int fibo(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fibo(n-1) + fibo(n-2) );
} 
