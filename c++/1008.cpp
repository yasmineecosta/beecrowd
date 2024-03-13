#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {

    int number, hours;
    float amount;
    cin >> number >> hours >> amount;
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << hours*amount << endl;
    
    return 0;
}