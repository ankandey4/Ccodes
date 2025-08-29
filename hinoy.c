#include<stdio.h>
  void hinoy( int n, char a, char b,char c){
    if (n==0)return;
      hinoy( n-1, a,c,b);
        printf("%d no disk move from %c to %c \n",n ,a ,c);
    hinoy( n-1,b, a, c);
  }

  int main(){
    int n;
    printf("enter a number: ");
      scanf("%d",&n);
        hinoy(n,'A','B','c');
    return 0;
  }
