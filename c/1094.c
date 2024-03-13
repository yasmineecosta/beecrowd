#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int N, sum, c, r, s;
  scanf("%d",&N);
  sum = 0; c = 0; r = 0; s = 0;
  for(int i=0; i<N; i++){
    int x;
    char y;
    scanf("%d %c",&x,&y);
    sum += x;
    if(y == 'C') c += x;
    else if(y == 'R') r += x;
    else if(y == 'S') s += x;
  }
  printf("Total: %d cobaias\n",sum);
  printf("Total de coelhos: %d\n",c);
  printf("Total de ratos: %d\n",r);
  printf("Total de sapos: %d\n",s);
  printf("Percentual de coelhos: %.2f %%\n",(c*100.0)/sum);
  printf("Percentual de ratos: %.2f %%\n",(r*100.0)/sum);
  printf("Percentual de sapos: %.2f %%\n",(s*100.0)/sum);
  
  return 0;
}