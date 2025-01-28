#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    void gotas(char mat[][MAX]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (mat[i][j] == '.' && (mat[i - 1][j] == 'o' || (j>=0 && mat[i+1][j+1] == '#') || (j > 0 && mat[i][j - 1] == 'o' && mat[i + 1][j - 1] == '#') || (j < M - 1 && mat[i][j + 1] == 'o' && mat[i + 1][j + 1] == '#') || (i < N - 1 && mat[i + 1][j] == '#' && mat[i][j] == 'o'))) {
        mat[i][j] = 'o';
      }else if ((mat[i][j] == '#') && (mat[i-1][j] == 'o') && (mat[i][j-1] == '.')) {
        mat[i+1][j-1] = 'o';
      }
    }
  }
}
    return 0;
}