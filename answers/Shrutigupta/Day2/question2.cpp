#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int n,d,m,r=0,count=0,sum=0;
  clrscr();//To clear the output screen
  printf("ENTER THE NUMBER: ");
  scanf("%d",&n);
  m=n;
  while(m>0)
  {
    d=m%10;
    r=r*10+d;//To reverse the number
    m/=10;
    count++; //To count the number of digits
  }
  for(int i=1;i<=count;i++)
  {
    int a=r%10;
    sum+=pow(a,i);
    r/=10;
  }
  if(sum==n)
    printf("%d is a disarium number");
  else
    printf("%d is not a disarium number");
  getch();
}
