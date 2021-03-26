#include<stdio.h>
void main()
{
  char s[100];
  int i,value[26]={0},c=0;
  printf("\n ENTER THE STRING: \n");
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]>='a'&&s[i]<='z')
    {
      c=c+(!value[s[i]-'a']);
      value[s[i]-'a']=1;
    }
    else if(s[i]>='A'&&s[i]<='Z')
    {
      c=c+(!value[s[i]-'A']);
      value[s[i]-'A']=1;
    }
  }
  if(c==26)
  printf("\n THE ENTERED STRING IS A PANGRAM STRING");
  else
    printf("\n THE ENTERED STRING IS NOT A PANGRAM STRING");
} 
