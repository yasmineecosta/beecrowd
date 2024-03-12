#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
    float sum = 0.0;
    int quant=0;
    while(true){
        int n;
        cin >> n;
        if(n < 0) break;
        quant++;
        sum += float(n);
    }
    cout << fixed << setprecision(2) << sum/quant << endl;
    return 0;
}
