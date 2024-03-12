#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int M, N, sum;
  while (true){
    cin >> M >> N;
    if(M <= 0 || N <= 0) break;
    if(M > N){
      sum = 0;  
      for(int i = N; i <= M; i++){
        cout << i << " ";
        sum += i;
      }
    }else{
      sum = 0;
      for(int i = M; i <= N; i++){
        cout << i << " ";
        sum += i;
      }
    }
    cout << "Sum=" << sum << endl;
  }
  return 0;
}
