#include<stdio.h>

int main(){
    int count = 0;
    for(int i =1; i<=10;i++)
    {
        if (i % 2==0 ){
            printf("\t\t%d\n",i);
            count ++;

        }
    }
    printf("\tThe total value of count : %d",count);
}
