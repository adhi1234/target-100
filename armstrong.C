#include <stdio.h>
#include <math.h>




int main()
{



fflush();
  int reminder,number,num,result;

  printf("ENTER THE NUMBER");
  scanf("%d",&number);

  num=number;



while(num !=0)
{
  reminder=num%10;
  result= result+(reminder*reminder*reminder);
  num=num/10;


}

printf("%d",result);

if(result==number)
{
  printf("The number is an armstrong number");

}

else
{
  printf("Not an armstrong number");
}



return 0;
}
