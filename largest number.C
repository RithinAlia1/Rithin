#include<stdio.h>
void main()
{
  int a,b,c;
  printf("enter the number:");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b && a>c)
  {
      printf("%d is largest number",a);
  }else if(b>a && b>c)
  {
      printf("%d is largest number",b);
  }else if(c>a && c>b)
  {
      printf("%d is largest number",c);
  }
}
