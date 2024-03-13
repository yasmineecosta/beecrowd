#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void printaResult(int x, int y){
    if (x > y){
        printf("Decrescente\n");
    }else if (x < y){
        printf("Crescente\n");
    }
}
int main() {

  int X, Y;
  while(1){
    scanf("%d %d",&X,&Y);
    if(X == Y){
        break;
    }
    printaResult(X,Y);
  }
  
  return 0;
}