#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int X,Y, sum;
  scanf("%d %d",&X, &Y);
  sum = 0;
  if(X>=Y){
    for(int i=Y; i<X; i++){
        if(i%13 != 0){
            sum += i;
            continue;
        }
    }
  }else{
    for(int i=X; i<Y; i++){
        if(i%13 != 0){
            sum += i;
            continue;
        }
    }
  }
  printf("%d\n",sum);
  
  return 0;
}