#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1000
int main() {
    char v_i[MAX], type[MAX], feed[MAX];
    scanf("%s", v_i);
    
    if(strcmp(v_i, "vertebrado") == 0){
        scanf("%s", type);
        if(strcmp(type, "ave") == 0){
            scanf("%s", feed);
            if(strcmp(feed, "carnivoro") == 0){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            scanf("%s", feed);
            if(strcmp(feed, "onivoro") == 0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else{
        scanf("%s", type);
        if(strcmp(type, "inseto") == 0){
            scanf("%s", feed);
            if(strcmp(feed, "hematofago") == 0){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            scanf("%s", feed);
            if(strcmp(feed, "hematofago") == 0){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
