#include <bits/stdc++.h>
using namespace std;

int main(){ 
  int numbers[3], ordem[3], aux;
  
    for(int i=0; i<3; i++){
      cin >> numbers[i];
      ordem[i] = numbers[i];
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            if(ordem[j] > ordem[j+1]){
                aux = ordem[j];
                ordem[j] = ordem[j+1];
                ordem[j+1] = aux;
            }
        }
    }
    cout << ordem[0] << "\n" << ordem[1] << "\n" << ordem[2] << "\n\n";
    for(int i=0; i<3; i++){
        cout << numbers[i] << "\n";
    }
  return 0;
}