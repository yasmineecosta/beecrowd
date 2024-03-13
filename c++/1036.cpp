#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
 
    double a,b,c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = pow(b,2) - (4*a*c);
    
    if(delta < 0 || a == 0){
        cout << "Impossivel calcular" << endl;
    }else{
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << fixed << setprecision(5);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }
 
    return 0;
}