#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int positive(int num){
    if(num > 0){
        return 1;
    }
    return 0;
}

int main(){ 
  float numbers[6], sum;
  int aux, i;
  sum = 0;
  aux = 0;
    for(int i=0; i<6; i++){
      scanf("%f", &numbers[i]);
      aux += positive(numbers[i]);
      if(positive(numbers[i])){
        sum += numbers[i];
      }
    }
    printf("%d valores positivos\n%.1f\n", aux, sum/aux);
    // cout << sum << aux << endl;
  return 0;
}