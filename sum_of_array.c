#include<stdio.h>

  int main()
  {
      int a,b=0;
      printf("enter the size of array: ");
      scanf("%d",&a);
        int arr[a];
          for(int i=0;i<a;i++){
            scanf("%d",&arr[i]);
            b=arr[i]+b;
          }
      printf("%d",b);
      return 0;
  }
