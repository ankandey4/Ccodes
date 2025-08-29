#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr = fopen("fileOpen.txt","r");
    char str[200];
      while(fgets(str,200,ptr)!=NULL)
      printf("%s",str);
      /*gets(str);
      fputs(str,ptr);
      fclose(ptr);*/


      fprintf(ptr,"Hello World!\n");
    return 0;
}
