#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int N;
    scanf("%d",&N);

    for(int i=0; i<N; i++){
        float a, b, c;
        scanf("%f %f %f",&a,&b,&c);
        printf("%.1f\n",(a*2+b*3+c*5)/10);
    }
    return 0;
}