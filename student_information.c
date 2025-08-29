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
    int res = strcmp(a.department , b.department);
    if(res == 0){
        printf("pass");
    }
    else printf("Not pass");
}

int main(){
    student stu[2];
    for(int i=0; i<2; i++){
        scanf("%d",&stu[i].roll);
        getchar();
        fgets(stu[i].name,sizeof(stu[i].name),stdin);
        stu[i].name[strcspn(stu[i].name,"\n")]='\0';


        getchar();
        fgets(stu[i].department,sizeof(stu[i].department),stdin);
        stu[i].department[strcspn(stu[i].department,"\n")]='\0';

        getchar();
        fgets(stu[i].course,sizeof(stu[i].course),stdin);
        stu[i].course[strcspn(stu[i].course,"\n")]='\0';
    }
  check(stu[0],stu[1]);
  return 0;
}
