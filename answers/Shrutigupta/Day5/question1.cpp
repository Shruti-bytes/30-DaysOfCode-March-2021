#include<stdio.h>
int main()
{
  int a=0,b=1,n,i;
  printf("ENTER THE VALUE OF SERIES");
  scanf("%d",&n);
  printf("%d %d ",a,b);
  for(i=1;i<=(n-2);i++)
  {
    c=a+b;
    printf("%d ",c);
    a=b;
    b=c;
  }
  return 0;
}
