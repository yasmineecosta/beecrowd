#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int M, N, sum;

  while (1){
    scanf("%d %d",&M, &N);
    if(M <= 0 || N <= 0) break;
    if(M > N){
      sum = 0;  
      for(int i = N; i <= M; i++){
        printf("%d ",i);
        sum += i;
      }
    }else{
      sum = 0;
      for(int i = M; i <= N; i++){
        printf("%d ",i);
        sum += i;
      }
    }
    printf("Sum=%d\n",sum);
  }
  return 0;
}