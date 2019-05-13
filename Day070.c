#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int i,j,n;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  int arr[n][n];
  printf("Enter %d elements\n",n);
  for (int i = 0; i < n ; i++) 
        {
          scanf("%d",&(arr[n-1][i]));
    }
    printf("Sum Triangle is \n");
  for (int i = n-2; i >=0; i--) 
  {
      for (int j = 0; j <= i; j++)
      { 
        arr[i][j] =  arr[i+1][j] + arr[i+1][j+1]; 
      }
  }
    for (int i = 0; i < n; i++) 
    { 
        for(int j = 0; j <= i ; j++) 
           { 
             printf("%d ",arr[i][j]);
           }
       { printf("\n"); }
    } 
  return 0;
}