#include <stdio.h>
#include <stdlib.h>



void bubble()
{
    int a[100000],n1,t,i,j;
    srand(0);

printf("Enter the number of elements");
scanf("%d",&n1);
printf("Enter the array");


for( i=0;i<n1;i++) // array input

{
  //scanf("%d",&a[i]);

  a[i]=rand();

}

  for(i=0;i<n1;i++)
  {
    for(j=0;j<(n1-i-1);j++)
    {

      if(a[j]>a[j+1]){


      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;

}
    }
  }




for (i = 0; i < n1; i++)
 {
  printf("%d\n",a[i]);
}

}



//insertion 


void insertion()

{
int i,j,key,n2;
int b[10000];

srand(0);

printf("Enter the number of elements for insertion");
scanf("%d",&n2);
printf("Enter the array");


for( i=0;i<n2;i++) // array input

{
 // scanf("%d",&b[i]);

    b[i]=rand();

}




for(i=1;i<n2;i++)
{
	key=b[i];
	while(i>0 && b[i-1]>key) {
		j=b[i];
		b[i]=b[i-1];
	   b[i-1]=j;
	   --i;
	}	
}
int k;
for(k=0;k<n2;k++)
{printf("%d\n	", b[k]);}
//printf("\n");
	}



//selection




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

      fflush(stdin);

        int choice;



        printf("Enter the choice");
        scanf("%d",&choice);

        if(choice==0)
            bubble();

           else if(choice==1) 

                insertion();

                else if(choice==2)

                    selection();
        return 0;
    }


