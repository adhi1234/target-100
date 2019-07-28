#include <stdio.h>

int main()
{
  char arr[67];
  int l=0;

  printf("Enter the string");

for(int i=0;arr[i]!='\0';i++)
{


  scanf("%s",&arr[i]);

}

for(int i=0;arr[i]!='\0';i++)
{

  l=l+1;
  printf("%s",arr[i]);

}




printf("%d is the length of the string",l);

return 0;


}
