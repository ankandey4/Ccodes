#include<stdio.h>
  int maze(int cr, int cc, int er, int ec){

      int rightway = 0;
      int downway = 0;
      if(cc==ec && cr==er) return 1;


      if(cc==ec)
      {
        rightway += maze(cr+1,cc,er,ec);
      }
      if(cr==er)
      {
          downway += maze(cr,cc+1,er,ec);
      }
      if(cc<ec && cr<er)
      {
          rightway += maze(cr+1,cc,er,ec);
          downway += maze(cr,cc+1,er,ec);
      }
      return rightway + downway;
  }

  int main(){
      int n,m;
      printf("enter num of row :");
      scanf("%d",&n);
      printf("enter num of colums :");
      scanf("%d",&m);
      printf("%d",maze(1,1,n,m));
  return 0;
  }
