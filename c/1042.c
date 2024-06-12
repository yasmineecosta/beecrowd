// Autora: Yasmine Martins
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){ 
    int numbers[3], ordem[3], aux;
  
    for(int i=0; i<3; i++){
        scanf("%d", &numbers[i]);
        ordem[i] = numbers[i];
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            if(ordem[j] > ordem[j+1]){
                aux = ordem[j];
                ordem[j] = ordem[j+1];
                ordem[j+1] = aux;
            }
        }
    }
    printf("%d\n%d\n%d\n\n", ordem[0],ordem[1],ordem[2]);
    for(int i=0; i<3; i++){
        printf("%d\n", numbers[i]);
    }
  return 0;
}