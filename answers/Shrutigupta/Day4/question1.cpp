#include<stdio.h>
int main()
{
  int n;
  printf("ENTER THE NUMBER");
  scanf("%d",&n);
  for(int i=2;i<=n;)
  {
    if(n%i==0)
    {
      printf("%d ",i);
      n=n/i;
    }
    else
    {
      i++;
    }
  }
  return 0;
}

      
