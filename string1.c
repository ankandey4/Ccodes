#include<stdio.h>
#include<string.h>

int main(){

char str[20]="ankan";
//gets(str);

/*for(int i=0;str[i]!='\0';i++){
    printf("%c \n",str[i]);

    //if(str[i]=='\0')
     //   break;
}
i*/
int len= sizeof(str);
printf("%d",len);

return 0;

}
