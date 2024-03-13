#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int N;
    scanf("%d",&N);
    int quant_in = 0, quant_out = 0;
    for(int i = 0; i < N; i++){
        int X;
        scanf("%d",&X);
        if(X >= 10 && X <= 20){
            quant_in++;
        }else{
            quant_out++;
        }
    }
    printf("%d in\n%d out\n",quant_in,quant_out);
    return 0;
}