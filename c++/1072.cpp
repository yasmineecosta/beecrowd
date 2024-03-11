#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int quant_in = 0, quant_out = 0;
    for(int i = 0; i < N; i++){
        int X;
        cin >> X;
        if(X >= 10 && X <= 20){
            quant_in++;
        }else{
            quant_out++;
        }
    }
    cout << quant_in << " in" << endl;
    cout << quant_out << " out" << endl;
    return 0;
}