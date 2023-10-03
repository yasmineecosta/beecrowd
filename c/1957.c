#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void decToHex(int dec){
    char hex[100];
    int i = 0;
    
    while(dec>0){
    int r = dec % 16;
    char digit;

    if(r < 10){
      digit = '0' + r;
    }else{
      digit = 'A' + (r - 10);
    }

    hex[i++] = digit;
    dec /= 16;
  }
  for(int j = i - 1; j >= 0; j--){
    printf("%c", hex[j]);
  }
  printf("\n");
}

int main() {
  
  int V;
  scanf("%d", &V);

  decToHex(V);
  return 0;
}
