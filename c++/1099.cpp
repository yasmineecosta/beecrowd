#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
using namespace std;

int main() {
    int N, X, Y, sum;
    cin >> N;
    for(int i=0; i<N; i++){
        sum = 0;
        cin >> X >> Y;
        if(X > Y){
            for(int j=Y+1; j<X; j++){
                if(j%2 != 0)    sum += j;
            }
        }else{
            for(int j=X+1; j<Y; j++){
                if(j%2 != 0)    sum += j;
            }
        }
            cout << sum << endl;
    }


    return 0;
}
