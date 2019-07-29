#include <stdio.h>

int main()
{

  int a[20],n,t,i,j;


printf("Enter the number of elements");
scanf("%d",&n);
printf("Enter the array");


for( i=0;i<n;i++) // array input

{
  scanf("%d",&a[i]);

}

  for(i=0;i<n;i++)
  {
    for(j=0;j<(n-i-1);j++)
    {

      if(a[j]>a[j+1]){


      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;

}
    }
  }




for (i = 0; i < n; i++) {
  printf("%d\n",a[i]);
}


return 0;


}
