#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {

    int nota;
    cin >> nota;
    if(nota>=86) cout << "A" << endl;
    else if(61<=nota && nota<=85) cout << "B" << endl;
    else if(36<=nota && nota<=60) cout << "C" << endl;
    else if(1<=nota && nota<=35) cout << "D" << endl;
    else cout << "E" << endl;
    
    return 0;
}