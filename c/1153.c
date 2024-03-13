#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fatorial(int x){
    int result = 1;
    for (int i = 1; i <= x; i++){
        result *= i;
    }
    printf("%d\n",result);
}
int main() {

  int N;
  scanf("%d",&N);
  fatorial(N);
  
  return 0;
}