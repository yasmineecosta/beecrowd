#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_pair(int num){
    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main() {
  int number[5];
  int pairs = 0;
  for(int i=0; i<5; i++){
    scanf("%d", &number[i]);
    if(is_pair(number[i]) == 1){
        pairs++;
    }
  }
  printf("%d valores pares\n", pairs);

  return 0;
}
