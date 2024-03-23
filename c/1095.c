#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000

int main() {

    for(int i = 0; i < ((60/5)+1); i++){
        printf("I=%d J=%d\n", i*3+1, 60-i*5);
    }
    return 0;
}