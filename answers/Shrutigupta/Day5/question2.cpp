#include<stdio.h>
int main()
{
  int n,a=1,c;
  printf("ENTER THE VALUE OF PATTERN: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      c=0;
      for(int k=2;k<=a/2;k++)
      {
        if(a%k==0)//Condition for non-prime
        {
          c++;
          break;
        }
      }
      if(a===1)
        printf("* ");
      else
      {
        if(c==0)
          printf("# ");
        else
          printf("* ");
      }
      a++;
    }
    printf("\n");
  }
  return 0;
}
