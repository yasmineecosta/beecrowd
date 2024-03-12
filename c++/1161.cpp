#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

void fatorial(lli n){
    lli fat = 1;
    for(lli i = 1; i <= n; i++){
        fat *= i;
    }
    cout << fat << endl;
}

int main() {
    lli M, N;
    while(cin >> M >> N){
        lli sum = 0;
        for(lli i = 1; i <= M; i++){
            sum += i;
        }
        for(lli i = 1; i <= N; i++){
            sum += i*i;
        }
        cout << sum << endl;
    }


    return 0;
}
