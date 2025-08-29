#include<stdio.h>
#include<string.h>

int main(){

    char s1[20] = "ankan dey";
    char s2[20];
    int i = 0, count = 0 ,j;

    while(s1[i]!='\0')
    {
        count++;
        i++;
    }
    for(j=0,i=count-1;count > j ;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    printf("%s\n",s2);
    return 0;
}
