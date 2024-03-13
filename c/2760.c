#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000
int main() {
    char a[MAX], b[MAX], c[MAX];
    fgets(a, MAX, stdin);
    fgets(b, MAX, stdin);
    fgets(c, MAX, stdin);

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';
    c[strcspn(c, "\n")] = '\0';
    printf("%s%s%s", a, b, c);
    printf("\n");
    printf("%s%s%s", b, c, a);
    printf("\n");
    printf("%s%s%s", c, a, b);
    printf("\n");
    printf("%.10s%.10s%.10s", a, b, c);
    printf("\n");
    
    return 0;
}