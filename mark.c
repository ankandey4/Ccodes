#include <stdio.h>

int main() {
    int arr[5];

   /* for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }*/
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);

        if(arr[i]<0 || arr[i]>100){
            printf("unvlid please enter others \n");
            scanf("%d",arr[i]);
        }
        else if(arr[i] >= 90 && arr[i] <= 100) {
            printf("A\n");
        }
        else if(arr[i] >= 80 && arr[i] < 90) {
            printf("B\n");
        }
        else if(arr[i] >= 70 && arr[i] < 80) {
            printf("C\n");
        }
        else if(arr[i]>0 && arr[i]<70) {
            printf("Fail\n");
        }
    }

    return 0;
}
