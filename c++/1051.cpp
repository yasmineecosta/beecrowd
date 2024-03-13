#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
 
    float salary, tax1,tax2,tax3;
    cin >> salary;
    
    tax1 = 0.08*1000.00;
    tax2 = 0.18*1500.00;
    
    if(salary <= 2000.00)   cout << "Isento" << endl;
    else if(salary >= 2000.01 && salary <= 3000.00) cout << "R$ " << fixed << setprecision(2) << (salary-2000)*0.08 << endl;
    else if(salary >= 3000.01 && salary <= 4500.00) cout << "R$ " << fixed << setprecision(2) << tax1+ ((salary-3000)*0.18) << endl;
    else if(salary > 4500)  cout << "R$ " << fixed << setprecision(2) << tax1+ tax2 + ((salary-4500)*0.28) << endl;

    return 0;
}