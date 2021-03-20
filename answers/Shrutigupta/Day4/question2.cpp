#include<stdio.h>
int main()
{
  int n=1;
  for(int i=1;i<=4;i++)
  {
    for(int a=1;a<=i;a++)
    {
      printf("%d ",n);
      n++;
    }
    printf("\n");
  }
  return 0;
}  
