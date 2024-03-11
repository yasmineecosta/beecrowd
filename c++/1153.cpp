#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void fatorial(int x){
    int result = 1;
    for (int i = 1; i <= x; i++){
        result *= i;
    }
    cout << result << endl;
}

int main() {
  int N;
  cin >> N;
  fatorial(N);
  
  return 0;
}
