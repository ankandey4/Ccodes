#include<stdio.h>

  int main()
  {
      int n;
      scanf("%d",&n);
      int total = 0, rabbit = 0, rat = 0, frog = 0;
      int a;
      char typ;

      for(int i=0; i<n; i++)
      {
          scanf("%d %c",&a,&typ);
          total += a;

          if(typ == 'C') {
                rabbit += a;}
          else if(typ =='R'){
            rat += a;
          }
          else if(typ =='S'){
            frog += a;
          }
      }
      printf("Total: %d cobaias\n", total);
      printf("Total de coelhos: %d\n", rabbit);
      printf("Total de ratos: %d\n", rat);
      printf("Total de sapos: %d\n", frog);

      printf("Percentual de coelhos: %.2f %%\n", (rabbit * 100.0) / total);
      printf("Percentual de ratos: %.2f %%\n", (rat * 100.0) / total);
      printf("Percentual de sapos: %.2f %%\n", (frog * 100.0) / total);

    return 0;

  }
