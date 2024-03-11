#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void printaResult(int x, int y){
    if (x > y){
        cout << "Decrescente" << endl;
    }else if (x < y){
        cout << "Crescente" << endl;
    }
}
int main() {
  int X,Y;
    while (true){
        cin >> X >> Y;
        if (X == Y){
            break;
        }
        printaResult(X, Y);
    }
  
  return 0;
}
