
#include <stdio.h>

int fibo(int n){

    if(n==0)return 0;
    if(n==1||n==2) return 1;

    return fibo(n-1)+fibo(n-2);
}

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("%d ",fibo(i));

    }
    return 0;
}
