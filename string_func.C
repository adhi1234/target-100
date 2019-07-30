#include <stdio.h>
#include <string.h>

int main()
{

  char name1[30];
  char name2[30];

  printf("Enter the string\n");
  scanf("%s",name1);
  scanf("%s",name2);


  strcat(name1,name2);

  puts(name1);
  puts(name2);

return 0;

}
