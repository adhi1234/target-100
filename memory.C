#include<stdio.h>

int  main()
{


    char c;

    printf("Enter the character");

    scanf("%c",&c);

    printf("%p",(void *)(&c));

    return 0;
    
}