#include <stdio.h>

int main()
{

    int arr[20],num,j,i,x;
    printf("Enter the size of array");
    scanf("%d",&num);


printf("Enter elements\n");
    for(j=0;j<=num;j++)
    {
        scanf("%d",&arr[j]);
    }


    printf("Enter the element to search");
    scanf("%d",&x);

    for(i=0;i<=num;i++)
    {
        if(arr[i]==x)
        {
            printf("Element found");
            break;
        }
            
        
           
            





    }
            printf("Element not found");

    return 0;
    
}