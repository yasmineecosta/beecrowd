#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int X,Y, sum;
  sum = 0;
  cin >> X >> Y;
  for(int i=X; i<=Y; i++){
    if(i%13 != 0) sum += i;
  }
    cout << sum << endl;
  
  return 0;
}
