#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int pos, neg, pairs, odds;

int pair_or_odd(int num){
    if(num % 2 == 0){
        pairs += 1;
    }else{
        odds += 1;
    }
    return 0;
}

int pos_or_neg(int num){
    if(num > 0){
        pos += 1;
    }else if(num < 0){
        neg += 1;
    }else{
        return 0;
    }
    return 0;
}

int main() {
    pos = 0;
    neg = 0;
    pairs = 0;
    odds = 0;

  int number[5], pairs = 0;
  for(int i=0; i<5; i++){
    cin >> number[i];
    pair_or_odd(number[i]);
    pos_or_neg(number[i]);
  }
  
  cout << pairs << " valor(es) par(es)" << endl;
  cout << odds << " valor(es) impar(es)" << endl;
  cout << pos << " valor(es) positivo(s)" << endl;
  cout << neg << " valor(es) negativo(s)" << endl;
  return 0;
}
