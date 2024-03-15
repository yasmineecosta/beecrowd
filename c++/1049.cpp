#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
    string v_i, type, feed;
    cin >> v_i;
    
    if(v_i == "vertebrado"){
        cin >> type;
        if(type == "ave"){
            cin >> feed;
            if(feed == "carnivoro"){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }else{
            cin >> feed;
            if(feed == "onivoro"){
                cout << "homem" << endl;
            }else{
                cout << "vaca" << endl;
            }
        }
    }else{
        cin >> type;
        if(type == "inseto"){
            cin >> feed;
            if(feed == "hematofago"){
                cout << "pulga" << endl;
            }else{
                cout << "lagarta" << endl;
            }
        }else{
            cin >> feed;
            if(feed == "hematofago"){
                cout << "sanguessuga" << endl;
            }else{
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
