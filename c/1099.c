#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int N, X, Y, sum;
  scanf("%d",&N);
  for(int i=0; i<N; i++){
    sum = 0;
    scanf("%d %d",&X, &Y);
    if(X > Y){
        for(int j=Y+1; j<X; j++){
            if(j%2 != 0)    sum += j;
        }
    }else{
        for(int j=X+1; j<Y; j++){
            if(j%2 != 0)    sum += j;
        }
    }
    printf("%d\n",sum);
  }
  return 0;
}