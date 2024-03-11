#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int X,Y, sum;
  cin >> X >> Y;
  sum = 0;
  if(X>=Y){
    for(int i=X; i<=Y; i++){
        if(i%13 != 0){
            sum += i;
        }
    }
  }else{
    for(int i=Y; i<=X; i++){
        if(i%13 != 0){
            sum += i;
        }
    }
  }
  cout << sum << endl;
  
  return 0;
}
