#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  while(1){
        int n;
        scanf("%d",&n);
        if(n == 0) break;
        for(int i = 1; i <= n; i++){
            printf("%d",i);
            if(i != n) printf(" ");
        }
        printf("\n");
    }
  return 0;
}