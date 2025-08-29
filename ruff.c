#include <stdio.h>

int main() {


    int a,b,count = 0;

    scanf("%d %d", &a, &b);

    for( int i = a+1; i<b; i++){
        if(i%5 == 2 || i%5 == 3){
           printf("%d\n",i);
        }
    }
    return 0;
}
