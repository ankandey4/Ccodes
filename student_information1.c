#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    char name[20];
    char department[20];
    char course[50];
    int year;
}student;

void check(student a,student b){
    if(strcmp(a.department , b.department)== 0){
        printf("pass");
    }
    else printf("Not pass");
}

int main(){
    student stu1, stu2;

        scanf("%d",&stu1.roll);
        getchar();
        gets(stu1.name);
        gets(stu1.department);
        gets(stu1.course);
        scanf("%d",&stu1.year);
        getchar();

        scanf("%d",&stu2.roll);
        getchar();
        gets(stu2.name);
        gets(stu2.department);
        gets(stu2.course);
        scanf("%d",&stu2.year);
        getchar();

  check(stu1,stu2);
  return 0;
}
