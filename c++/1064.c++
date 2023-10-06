#include <bits/stdc++.h>
using namespace std;

int positive(int num){
    if(num > 0){
        return 1;
    }
    return 0;
}
int main(){ 
  float numbers[6], sum;
  int aux, i;
  sum = 0;
  aux = 0;
    for(int i=0; i<6; i++){
      cin >> numbers[i];
      aux += positive(numbers[i]);
      if(positive(numbers[i])){
        sum += numbers[i];
      }
    }
    cout << aux << " valores positivos\n";
    // cout << sum << aux << endl;
    cout << fixed << setprecision(1) << sum/aux << endl;
  return 0;
}