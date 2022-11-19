#include<stdio.h>
void main()
{
   int arr[50], i,j,n,t;
   printf("enter the No: of elements in the list:");
   scanf("%d", &n);
   printf("enter the elements:");
   for(i=0; i<n; i++)
   {
      scanf ("%d", &arr[i]);
   }
   printf("Before bubble sorting the elements are:");
   for(i=0; i<n; i++)
   {
      printf("%d \t", arr[i]);
   }
   for (i=0; i<n-1; i++)
   {
      for (j=i+1; j<n; j++)
      {
         if (arr[i] > arr[j])
         {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
         }
      }
   }
   printf ("after bubble sorting the elements are:");
   for (i=0; i<n; i++)
   {
      printf("%d\t", arr[i]);
   }
}
