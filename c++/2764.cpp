#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

#include <string> 

int main() {
    string a, data, mes, ano;
    cin >> a;
    data = a.substr(0, 2);
    mes = a.substr(3, 2);
    ano = a.substr(6, 2);
    cout << mes << "/" << data << "/" << ano << endl;
    cout << ano << "/" << mes << "/" << data << endl;
    cout << data << "-" << mes << "-" << ano << endl;
    
    return 0;
}
