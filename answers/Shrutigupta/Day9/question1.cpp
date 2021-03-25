#include<stdio.h>
void sum(int arr[],int n,int target)
{
  for(int i=0;i<n,i++)
  {
    for(int j=i+1,j<n,j++)
    {
      if(arr[j]==target-arr[i])
        printf("[%d,%d]",i,j);
    }
  }
}
int main()
{
  int arr[]={2,7,11,15};
  int n=sizeof(arr)/sizeof(arr[0]);
  int target=9;
  sum(arr,n,target);
  return 0;
}
