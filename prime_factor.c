#include<stdio.h>

int main() 
{
    int n;
    scanf("%d",&n);
   for(int i=2;i<=n;i++)
   {
       while(n%i==0)
       {
           printf("%d,",i);
           n=n/i;
       }
   }
  if(n>0)
  {
      printf("%d.",n);
  }
}