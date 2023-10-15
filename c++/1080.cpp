#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  
  int number[100], bigger, position;
  cin >> number[0];
  bigger = number[0];
  for(int i=1; i<100; i++){
    cin >> number[i];
    if(number[i] > bigger){
      bigger = number[i];
      position = i+1;

    }
  }

  cout << bigger << "\n" << position << endl;

  return 0;
}
