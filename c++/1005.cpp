#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {

    float A, B, average;
    cin >> A >> B;
    average = ((3.5*A) + (B*7.5))/11.0;
    cout << fixed << setprecision(5) << "MEDIA = " << average << endl;
 
    return 0;
}