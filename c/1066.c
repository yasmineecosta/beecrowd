#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pos, neg, pairs, odds;

int pair_or_odd(int num){
    if(num % 2 == 0){
        pairs += 1;
    }else{
        odds += 1;
    }
    return 0;
}

int pos_or_neg(int num){
    if(num > 0){
        pos += 1;
    }else if(num < 0){
        neg += 1;
    }else{
        return 0;
    }
    return 0;
}

int main() {
    pos = 0;
    neg = 0;
    pairs = 0;
    odds = 0;

  int number[5];
  for(int i=0; i<5; i++){
    scanf("%d", &number[i]);
    pair_or_odd(number[i]);
    pos_or_neg(number[i]);
  }
  
  printf("%d valor(es) par(es)\n", pairs);
  printf("%d valor(es) impar(es)\n", odds);
  printf("%d valor(es) positivo(s)\n", pos);
  printf("%d valor(es) negativo(s)\n", neg);
  return 0;
}
