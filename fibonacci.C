#include <stdio.h>
#include <conio.h>


int main()
{

  int num,sum=1;
  int a,b,c;

a=0;
b=1;
  printf("Enter the limit");
  scanf("%d",&num);

  printf("%d \n %d",a,b);

for(int i=0;i<num;i++)
{
   c=a+b;
   printf("%d\n",c);
   a=b;
   b=c;



}
return 0;
}
