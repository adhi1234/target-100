#include <stdio.h>

int main()
{

int fact=1,num;

  printf("Enter the number");
  scanf("%d",&num);

  if(num==0)
  {
printf("Factorial cannot be found");

  }

  for(int i=num;i!=1;i--)
  {
    fact=fact*i;
  }


printf("%d",fact);

return 0;




}
