#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {

    int A, B, C, D;
    cin >> A >> B >> C >> D;
    
    if(B>C && D>A && (C+D)>(A+B) && (C>0) && (D>0) && (A%2==0)) cout << "Valores aceitos" << endl;
    else cout << "Valores nao aceitos" << endl;
    
    return 0;
}