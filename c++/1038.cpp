#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
 
    int X, Y;
    cin >> X >> Y;

    if(X==1)  cout << "Total: R$ " << fixed << setprecision(2) << 4.0*Y << endl;
    else if(X==2) cout << "Total: R$ " << fixed << setprecision(2) << 4.5*Y << endl;
    else if(X==3) cout << "Total: R$ " << fixed << setprecision(2) << 5.0*Y << endl;
    else if(X==4) cout << "Total: R$ " << fixed << setprecision(2) << 2.0*Y << endl;
    else if(X==5) cout << "Total: R$ " << fixed << setprecision(2) << 1.5*Y << endl;

    return 0;
}