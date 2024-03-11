#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int N;

  cin >> N;
  for(int i=0; i<N; i++){
    long long int X;
    cin >> X;
    if(X == 0){
      cout << "NULL" << endl;
    }else if(i % 2 == 0){
        if(X > 0)
          cout << "EVEN" << " " << "POSITIVE" << endl;
        else
          cout << "EVEN" << " " << "NEGATIVE" << endl;
    }else{
        if(X > 0)
          cout << "ODD" << " " << "POSITIVE" << endl;
        else
          cout << "ODD" << " " << "NEGATIVE" << endl;
    }

  }
  
  return 0;
}
