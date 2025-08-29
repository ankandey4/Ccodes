#include<stdio.h>

  int main(){
     int n;
     printf("Enter the series element:");
     scanf("%d",&n);
     // this logic only for 1 to a or any num series.Those series whose difference is one
     int arr[n];
     for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
     }
     int j;
     int missing=0;
     for(j=0;j<n;j++){
        if (arr[j + 1] - arr[j] != 1) {
            missing = arr[j] + 1;
            break;
        }
     }
     int index= j+1;
     printf("the missing index is %d \n",index);
     if (missing != -1){
        printf("The missing element is: %d\n", missing);
    }
    else {
        printf("No missing element found.\n");
    }
    return 0;
  }
