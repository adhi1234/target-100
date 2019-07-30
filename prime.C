#include <stdio.h>

int main()
{
  int i,j;
  int flag=0,num;



  printf("Enter the number of elements");
  scanf("%d",&num);

bool pr=pr[num+1];

  for(i=2;(i*i)<=num;i++)
  {
    if(pr[i]==true)
    {
        for(j=(i*i);j<=num;j=j+i)
        {
          pr[i]=false;

        }

    }
  }


  for (int x = 0; x<=num; x++)
    {
      if(pr[x])
      printf("%d\n",pr[x]);
    }

return 0;
}
