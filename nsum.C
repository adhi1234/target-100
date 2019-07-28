#include <stdio.h>

int main()
{

  int limit;
  int sum=0;

  printf("ENTER THE LIMIT\n");
  scanf("%d",&limit);

  for(int i=1;i<=limit;i++)
  {
    sum=sum+i;

  }

  printf("The sum is %d",sum);

  return 0;

}
