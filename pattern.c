#include<stdio.h>

int main()
{
  char ch='*';
  int i,j,n;

  printf("Enter the number of times you want to print");
  scanf("%d",&n);

  for(i=n;i>=1;i--)
  {
    for (j=1;j<=i;j++)
    {
      printf("%c",ch);


    }
    printf("\n");
  }

  return 0;

}
