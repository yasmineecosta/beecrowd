#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int is_pair(int num){
    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main() {
  
  int number[5], pairs = 0;
  for(int i=0; i<5; i++){
    cin >> number[i];
    if(is_pair(number[i]) == 1){
        pairs++;
    }
  }
  
  cout << pairs << " valores pares" << endl;

  return 0;
}
