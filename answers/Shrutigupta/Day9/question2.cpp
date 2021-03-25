#include<stdio.h>
void maxsum(int arr[],int n)
{
  int a=arr[0];
  int b=arr[0];
  for(int i=0;i<n;i++)
  {
    if(b+arr[i]<arr[i])
      b=arr[i];
    else
      b=b+arr[i];
    if(b>a)
      a=b;
  }
  printf("%d",a);
}
int main()
{
  int arr[]={-2,1,-3,4,-1,2,1,-5,4};
  int n=sizeof(arr)/sizeof(arr[0]);
  maxsum(arr,n);
  return 0;
}
