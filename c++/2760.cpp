#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

#include <string> 

int main() {
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    cout << a << b << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    cout << a.substr(0, 10) << b.substr(0, 10) << c.substr(0, 10) << endl;
    return 0;
}
