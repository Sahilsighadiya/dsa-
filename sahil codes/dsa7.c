#include <stdio.h>
 
#define MAX 100
 
int main()
{
    int arr[MAX],limit;
    int i,j,temp;
     
    printf("Enter total number of elements: ");
    scanf("%d",&limit);
    printf("Enter array elements: \n");
    for(i=0; i<limit; i++)
    {
        printf("Enter element %3d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<(limit-1); i++)
    {
        for(j=0; j<(limit-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
 
    printf("Array elements in Ascending Order:\n");
    for(i=0; i<limit; i++)
        printf("%d ",arr[i]);
     
    printf("\n");
    for(i=0; i<(limit-1); i++)
    {
        for(j=0; j<(limit-i-1); j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
 
    printf("Array elements in Descending Order:\n");
    for(i=0; i<limit; i++)
        printf("%d ",arr[i]);
     
    printf("\n");
     
    return 0;
}
