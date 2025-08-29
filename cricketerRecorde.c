#include<stdio.h>
#include<string.h>

int main(){
    typedef struct c{
      char name[15];
      int age;
      int NoOfMatches;
      float average;
    }cricketer;

    cricketer arr[3];
    printf("Enter the information of cricketers \n");
    for(int i=0; i<3; i++)
    {
        gets(arr[i].name);
        scanf("%d\n",&arr[i].age);
        scanf("%d\n",&arr[i].NoOfMatches);
        scanf("%f",&arr[i].average);
    }
    for(int i=0; i<3; i++)
    {
        puts(arr[i].name);
        printf("The age is %d \n",arr[i].age);
        printf("The match is %d \n",arr[i].NoOfMatches);
        printf("The average is %f  \n\n",arr[i].average);

    }


return 0;
}
