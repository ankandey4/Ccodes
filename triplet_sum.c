#include<stdio.h>

  int main()
  {
      int a,b,totaltriplet=0;
      printf("Enter the sum of triplet: ");
      scanf("%d",&b);
      printf("Enter the size of array: ");
      scanf("%d",&a);
      int arr[a];
      for(int i=0; i<a; i++)
      {
          scanf("%d",&arr[i]);
      }
      for (int i=0; i<a; i++)
      {
          for (int j=i+1; j<a; j++)
          {
              for(int k=j+1; k<a; k++)
              {
                  if(arr[i]+arr[j]+arr[k]==b)
                  {
                      totaltriplet++;
                      printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                  }
              }

          }
      }
      printf("%d \n",totaltriplet);
  }
