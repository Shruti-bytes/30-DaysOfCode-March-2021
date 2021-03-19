#include<stdio.h>
#include<conio.h>
void main()
{
  int n,count,m;
  clrscr();//To clear the output screen
  printf("ENTER THE NUMBER");
  scanf("%d",&n);
  for(int i=0;i<=9;i++)
  {
    count=0;
    m=n;
    while(m>0)
    {
      int d=m%10;
      if(d==i)
        count++;
      m/=10;
    }
    if(count>1)
      break;
  }
  if(count==0||count==1)
    printf("%d is a unique number",n);
  else
    printf("%d is not a unique number");
}
    
