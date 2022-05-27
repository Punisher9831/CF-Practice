#include<stdio.h>
#include<string.h>
int main()
{
 int n,i;
 scanf("%d",&n);
 char a[100];
 while(n>0)
 {
  scanf("%s",a);
  if((i=strlen(a))<=10)
  {
   printf("%s\n",a);
  }
  else
  {
  printf("%c",a[0]);
  printf("%d",i-2);
  printf("%c\n",a[i-1]);
  }
  n--;
 }
 return 0;
}