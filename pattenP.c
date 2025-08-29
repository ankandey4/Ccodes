#include<stdio.h>

int main(){
    int a;
    int b;
    scanf("%d",&a);
    int c=a-1;
    for(int i=1;i<=a;i++){
        b=a*i-c;

        for(int j=i;j>0;j--){
            printf("%d ",b);
            b -= 5;

        }
        printf("\n");
        c -=i;
    }
}
