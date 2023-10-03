#include <bits/stdc++.h>
#include <iostream>

using namespace std;

string decToHex(int dec){
  string hex = "";

  while(dec>0){
    int r = dec % 16;
    char digit;

    if(r < 10){
      digit = '0' + r;
    }else{
      digit = 'A' + (r - 10);
    }

    hex = digit + hex;
    dec /= 16;
  }
  return hex;
}

int main() {
  
  int V;
  cin >> V;
  
  string resp = decToHex(V);
  cout << resp << endl;

  return 0;
}
