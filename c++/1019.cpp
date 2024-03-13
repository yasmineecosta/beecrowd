#include <bits/stdc++.h>
#include <iostream>
#include <string> 
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {

    int N, hours, minutes, seconds;
    cin >> N;
    hours = (N/3600);
    minutes = (N -(3600*hours))/60;
    seconds = (N -(3600*hours)-(minutes*60));
    cout << hours << ":" << minutes << ":" << seconds << endl;
    
    return 0;
}