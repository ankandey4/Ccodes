#include<stdio.h>
#include<string.h>

int main(){
    

    char str[20]="ankan dey";
    int i=0,count=0;
    while(str[i]  != '\0')
    {
        count++;
        i++;
    }
    for(int j=0,k=count-1;j<=k;k--,j++)
    {
        char tamp=str[j];
        str[j]=str[k];
        str[k]=tamp;
    }
    puts(str);
    return 0;

}