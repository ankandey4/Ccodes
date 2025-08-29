#include<stdio.h>

 int main(){
     int a;
     printf("Enter the size of arr: ");
     scanf("%d",&a);
     int arr[a];
     for(int i=0; i<a; i++){
        scanf("%d",&arr[i]);
     }
     int max=arr[0],smax = arr[0];
     for(int i=0; i<a; i++){
        if(max<arr[i]){
            smax = max ;
            max = arr[i] ;
        }
        else if(smax<arr[i] && max != arr[i]){
            smax=arr[i];
        }
     }
     printf("%d \n",smax);
     printf("%d \n",max);
 return 0;
 }
