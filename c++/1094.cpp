#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int N, sum, c, r, s;
  cin >> N;
  sum = 0; c = 0; r = 0; s = 0;
  for(int i=0; i<N; i++){
    int x;
    char y;
    cin >> x >> y;
    sum += x;
    if(y == 'C') c += x;
    else if(y == 'R') r += x;
    else if(y == 'S') s += x;
  }
  cout << "Total: " << sum << " cobaias" << endl;
  cout << "Total de coelhos: " << c << endl;
  cout << "Total de ratos: " << r << endl;
  cout << "Total de sapos: " << s << endl;
  cout << fixed << setprecision(2) << "Percentual de coelhos: " << (c*100.0)/sum << " %" << endl;
  cout << fixed << setprecision(2) << "Percentual de ratos: " << (r*100.0)/sum << " %" << endl;
  cout << fixed << setprecision(2) << "Percentual de sapos: " << (s*100.0)/sum << " %" << endl;     

  return 0;
}
