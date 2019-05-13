#include <stdio.h>
#include <stdlib.h>
void ascend(int *,int);
void print(int * arreven,int * arrodd,int size,int );
int main(void)
{
  int i,j=0,k=0,size,num,*arrodd,*arreven,min=20;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d elements\n",size);
  arrodd=(int *)malloc(size*sizeof(int));
  arreven=(int *)malloc(size*sizeof(int));
  for(i=0;i<size;i++)
  {
    scanf("%d",&num);
    if(num%2==0){arreven[j]=num;j++;}
    else {arrodd[k]=num;k++;}
    if(num<min)
    {
      min=num;
    }
  }
  if(min%2==0)
  {
    printf("Smallest value is %d, so output is Even-Odd pattern\n",min);
    ascend(arreven,j);ascend(arrodd,k);print(arreven,arrodd,size,1);
  }
  else
  {
    printf("Smallest value is %d, so output is Odd-Even pattern\n",min);
    ascend(arrodd,k);ascend(arreven,j);print(arreven,arrodd,size,2);
  }
  return 0;
}
void ascend(int * arr,int  size)
{
  int i,j,temp;
  for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void print(int * arreven,int * arrodd,int size,int flag)
{
  if(flag==1)
  {
  for(int i=0;i<(size/2);i++)
  {
    printf("%d,",arreven[i]);
    printf("%d,",arrodd[i]);
  }
  }
  else
  {
    for(int i=0;i<(size/2);i++)
    {
    printf("%d,",arrodd[i]);
    printf("%d,",arreven[i]);
    }
  }
}