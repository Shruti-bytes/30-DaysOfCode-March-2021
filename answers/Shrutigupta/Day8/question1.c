#include<stdio.h>
void unique(int arr[],int n)
{
  int count,sum=0;
  for(int i=0;i<n;i++)
  {
    count=0;
    for(int j=0;j<n;j++)
    {
      if(arr[i]==arr[j])
        count++;
    }
    if(count==1)
      sum+=arr[i];
  }
  printf("\n %d",sum);
}
int main()
{
  int arr[]={1,2,3,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  unique(arr,n);
  return 0;
}
