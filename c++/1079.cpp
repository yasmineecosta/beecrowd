#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int N;

  cin >> N;
  for(int i=0; i<N; i++){
    float a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(1) << (a*2 + b*3 + c*5)/10 << endl;     
  }
  
  return 0;
}
