#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  
  int number[5], bigger, position;
  scanf("%d",&number[0]);
  bigger = number[0];
  position = 1;
  for(int i=1; i<5; i++){
    scanf("%d",&number[i]);
    if(number[i] > bigger){
      bigger = number[i];
      position = i+1;

    }
  }

  printf("%d\n%d\n", bigger, position);

  return 0;
}