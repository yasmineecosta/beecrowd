#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {

    double A, B, C, media;
    cin >> A >> B >> C;
    
    media = ((A*2)+(B*3)+(C*5))/10;
    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;
 
    return 0;
}