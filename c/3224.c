#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000
int main() {
    char a[MAX], b[MAX];
    // fgets(a, MAX, stdin);
    // fgets(b, MAX, stdin);
    scanf("%s", a);
    scanf("%s", b);
    if(strlen(a) >= strlen(b)){
        printf("go\n");
    }else{
        printf("no\n");
    }
    return 0;
}