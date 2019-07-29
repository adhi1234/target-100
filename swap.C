#include <stdio.h>
#include <stdlib.h>
 int main()
{
  int a,b;
  printf("Enter two numbers to swap\n");
  scanf("%d %d",&a,&b);

  printf("Swaping two numbers");


  a=a+b;
  b=a-b;
  a=a-b;

  printf("%d \n%d\n",a,b);



return 0;




}
