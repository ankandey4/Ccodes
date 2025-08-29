#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    int arr1[a][b];
    int arr2[a][b];
    int sum[a][b];

    for(int i=0;i<a;i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0; j<b; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0; j<b; j++)
        {
           sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0; j<b; j++)
        {
          printf("%d",sum[i][j]);
          printf(" ");
        }
        printf("\n");
    }

    return 0;
}
