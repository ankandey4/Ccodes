#include<stdio.h>
#include<string.h>

int main()
{
    char arr[]="this is my name";
    char arr1[50];

    int i = 0, size = 0;

    while(arr[i]!='\0'){
        size++;
        i++;
    }

    printf("%d\n",size);

    int a = strlen(arr);

    printf("%d\n",a);
    int j;
    for( j = 0; j < size; j++){
        arr1[j]= arr[size - j];
    }
    arr1[j] = '\0';
    printf("%s\n", arr1);

}