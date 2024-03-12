#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
using namespace std;

void ehprimo(int n){
    int div = 0;
    for(int aux=2; aux<=sqrt(n); aux++){
        div = 0;
        if(n%aux==0) div++;
        
    }
    if(div != 0)    cout << "Bad boy! I’ll hit you." << endl;
    else    cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
    
}

int main() {
    int M, V[MAX], N;

    while (cin >> M){
        int sum = 0;
        for(int i=0; i<M; i++){
        cin >> V[i];
        }
        cin >> N;
        for(int i=0; i<M; i++){
            if(i%N == 0){
                sum += V[i];
            }
        }
        ehprimo(sum);
    }
    
    return 0;
}
