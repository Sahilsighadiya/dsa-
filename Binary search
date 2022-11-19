#include <stdio.h>
void main()
{
  int c, i, j, a, first, last, middle, n, search, array[100];

  printf("Enter number of elements:");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
  {
    scanf("%d", &array[c]);
   }
  printf("Enter value to find\n");
  scanf("%d", &search);
  
  for (i = 0; i < n; ++i)
  {
     for (j = i + 1; j < n; ++j)
     {
        if (array[i] > array[j])
        {
            a = array[i];
            array[i] = array[j];
            array[j] = a;
        }
      }
   }


  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  printf("{");
  for(i=0;i<n;i++)
  {
      printf("%d ",array[i]);
  }
  printf("}\n");
  while (first <= last) {
    if (array[middle] < search){
      first = middle + 1;
     }
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle);
      break;
    }
    else{
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);
  }
}
