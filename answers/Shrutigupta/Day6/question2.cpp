#include<stdio.h>
int main()
{
  int arr[5];
  int sum=0; //Stores the sum
  printf("ENTER THE VALUE OF AN ARRAY ELEMENTS: ");
  for(int i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<5;i++)
  {
    for(int j=i;j<5;j+=2) //Generate all subarray of odd length
    {
      for(int k=i;k<=j;k++)
      {
        sum+=arr[k]; //Add the element to sum
      }
    }
  }
  printf("%d",sum);
  return 0;
}
