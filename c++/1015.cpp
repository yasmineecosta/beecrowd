#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {

    double x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    double distance = pow(x2-x1, 2) + pow(y2-y1, 2);
    cout << fixed << setprecision(4) << sqrt(distance) << endl;

    return 0;
}