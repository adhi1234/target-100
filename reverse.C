#include <stdio.h>
#include <string.h>

int main()
{

  int i,p;
  char str[30],arr[40];
  printf("Enter a string\n\n");
  scanf("%s",str);

  p=strlen(str)-1;

for (i=0;str[i]!='\0';i++)
{
  arr[p]=str[i];
  p--;
  }


  printf("%s\n\n",arr);












return 0;
}
