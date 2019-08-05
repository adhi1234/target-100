
#include <stdio.h>
#include <stdlib.h>

void selection()
    {
        int i,j,x,min,k,n3;
        int c[10000];
        srand(0);


    printf("Enter the number of elements");
    scanf("%d",&n3);


printf("Enter the array");


for( i=0;i<n3;i++) // array input

{
  //scanf("%d",&c[i]);

  c[i]=rand();

}

        for(i=0;i<=(n3-2);i++)
         {
	    min=i;
	    for(j=i+1;j<=(n3-1);j++) 
        {
		if(c[j]<c[min]) 
        {
			min=j;
	}
	x=c[i];
	c[i]=c[min];
	c[min]=x;

    }	
    }
    for(k=0;k<n3;k++)
     {
         printf("%d\n",c[k]);
     }
	//printf("\n");
    }

int main()
{
    selection();

    return 0;
}