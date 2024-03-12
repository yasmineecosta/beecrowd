#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
    while(true){
        int n;
        cin >> n;
        if(n == 0) break;
        for(int i = 1; i <= n; i++){
            cout << i;
            if(i != n) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
