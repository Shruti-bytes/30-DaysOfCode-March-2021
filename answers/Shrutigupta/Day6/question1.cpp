#include<stdio.h>
int main()
{
  int candies[5];
  int extracandies;
  printf("ENTER THE VALUE OF 5 CANDIES: ");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&candies[i]);
  }
  printf("ENTER THE VALUE OF EXTRA CANDIES");
  scanf("%d",&extracandies);
  int max=candies[0];
  for(i=1;i<5;i++)
  {
    if(candies[i]>max)
      max=candies[i];
  }
  for(i=0;i<5;i++)
  {
    if((candies[i]+extracandies)<max)
      printf("False ");
    else
      printf("True ");
  }
  return 0;
}
