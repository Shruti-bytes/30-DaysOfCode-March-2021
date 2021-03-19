#include<stdio.h>
#include<conio.h>
int main()
{
  int n,sum=0,r=0;
  clrscr();//To clear the output screen
  printf("ENTER THE NUMBER");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    r=r*10+i;
    sum+=r;
  }
  printf("%d",sum);
  return 0;
}
