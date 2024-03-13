#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000
int main() {
    char a[MAX], data[3], mes[3], ano[3];
    scanf("%s", a);

    strncpy(data, a, 2);
    data[2] = '\0';
    strncpy(mes, a+3, 2);
    mes[2] = '\0';
    strncpy(ano, a+6, 2);
    ano[2] = '\0';

    printf("%s/%s/%s\n", mes, data, ano);
    printf("%s/%s/%s\n", ano, mes, data);
    printf("%s-%s-%s\n", data, mes, ano);
    return 0;
}