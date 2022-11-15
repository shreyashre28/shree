#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,n,s=0,*p;
  printf("enter the size");
  scanf("%d",&n);
  p=(int*)malloc(n*sizeof(int));
  printf("\n enter the array elements are:");
        {
          scanf("%d",p+i);
          s=s+*p+i;
        }
  printf("\n sum=%d",s);
  // deallocate the allocated memory
  free(p);
  return 0;
}
