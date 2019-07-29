#include <stdio.h>
#include <stdlib.h>


int  main()
{

  char str[20];
  int i=0,j;

  printf("Enter the string");

  
  scanf("%s",str);





  while(str[i]!='\0')
  {
      if(str[i]>='a' && str[i]<='z')
      {
        str[i]=str[i]-32;
      }
      i++;
  }

printf("%s\n",str);


  return 0;
}
