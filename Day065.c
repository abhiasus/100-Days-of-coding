#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
  int i,count,n;
  char * arr;
  char * num[]={"one","two","three","four","five"};
  arr=(char *)malloc(28*sizeof(char));
  printf("Enter the input string\n");
  scanf("%s",arr);
  n=strlen(arr);
  arr=realloc(arr,n+1);
  printf("RLE result is ");
  for(i=0;i<n;i++){
    count=1;
    while(i<n-1 && arr[i]==arr[i+1]){
      count++;
      i++;
    }if((int)arr[i]>=49 && (int)arr[i]<58){
      printf("%s%c",num[count-1],arr[i]);
    }else
       printf("%d%c",count,arr[i]);
  }
  return 0;
}
