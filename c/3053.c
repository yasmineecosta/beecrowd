#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
  int n;
  char resp;
  scanf("%d", &n);
  scanf(" %c", &resp);
  int events;

  for (int i = 0; i < n; i++) {
    scanf("%d", &events);
    if (events == 1 ) {
      if(resp == 'A'){
        resp = 'B';
      }else if(resp == 'B'){
        resp = 'A';
      }else if(resp == 'C'){
        resp = 'C';
      }
    } else if (events == 2) {
      if(resp == 'A'){
        resp = 'A';
      }else if(resp == 'B'){
        resp = 'C';
      }else if(resp == 'C'){
        resp = 'B';
      }
    } else if (events == 3) {
      if(resp == 'A'){
        resp = 'C';
      }else if(resp == 'B'){
        resp = 'B';
      }else if(resp == 'C'){
        resp = 'A';
      }
    }
  }
  printf("%c\n", resp);

  return 0;
}
