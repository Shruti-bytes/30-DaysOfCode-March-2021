#include<stdio.h>
#include<conio.h>
int prime(int a)
{
  if(a<=1)//corner case
    return 0;
  for(int b=2;b<=a/2;b++)// check from 2
  {
    if(a%b==0)
      return 0;
  }
  return 1;
}
void main()
{
  int n,num,rev=0,d;
 clrscr();//To clear the output screen
  printf("ENTER A NUMBER");
  scanf("%d",&n);
  num=n;
  while(num>0)//Find reverse of n
  {
    d=num%10;
    rev=rev*10+d;
    num/=10;
  }
  if(prime(n) && prime(rev))
    printf("%d is a emirp number",n);
  else
    printf("%d is not a prime number",n);
  getch();
}
