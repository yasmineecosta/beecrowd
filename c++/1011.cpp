#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {

    double R, vol;
    cin >> R;
    
    vol = (4.0/3.0)*3.14159;
    cout << fixed << setprecision(3) << "VOLUME = " << vol*R*R*R << endl;

    return 0;
}