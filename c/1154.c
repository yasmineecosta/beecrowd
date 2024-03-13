#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float sum = 0.0;
    int quant=0;
    while(1){
        int n;
        scanf("%d",&n);
        if(n < 0) break;
        quant++;
        sum += n;
    }
    printf("%.2f\n",sum/quant);
    
    return 0;
}