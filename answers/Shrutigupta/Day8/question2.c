#include<stdio.h>
void masum(int a[],int n)
{
  int temp,i,sum=0;
  //sorting the array
  for(i=0;i<n;++i)
  {
    for(int j=i+1;j<n;++j)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  for(i=0;i<n-1;i+=2)
    sum+=a[i];
  printf("%d",sum);
}
int main()
{
  int a[]={1,4,3,2};
  int n=sizeof(a)/sizeof(a[0]);
  maxsum(a,n);
  return 0;
}
