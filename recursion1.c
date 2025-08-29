#include<stdio.h>

void func(int a)
{

    if(a==0) return;
    printf("%d",a);
    func(a-1);
    printf("%d",a);
}

int main()
{
    int a;
    scanf("%d",&a);
    func(a);
    return 0;

}
