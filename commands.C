#include <stdio.h>
#include <stdlib.h>

int main()
{
  char command[10];
  printf("Type the command to execute\n");
  scanf("%s",command);

  system(command);
  return 0;
}
