#include <stdio.h>
int main(void) 
{
  int i,size,min=100,min1=100;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter %d elements\n",size);int arr[size];
  for(i=0;i<size;i++)
  {
    scanf("%d",&(arr[i]));
    if(min>arr[i])
    {
      min=arr[i];
    }
  }
  for(i=0;i<size;i++)
  {
    if(min1>arr[i]&&min!=arr[i])
    {
      min1=arr[i];
    }
  }
  printf("Smallest pair is [%d,%d]\n",min,min1);
  printf("Sum of the smallest pair is %d",min+min1);
  return 0;
}