#include <bits/stdc++.h>
#include <iostream>
#define MAX 1000
#define lli long long int
#define ll long long
#define ld  long double
using namespace std;

int main() {
    float notas1, notas2, media, nota_comp;
    while(true){
        cin >> notas1;
        if(notas1 < 0 || notas1 > 10){
            cout << "nota invalida" << endl;
        }else{
            nota_comp = notas1;
            while(true){
                cin >> notas2;
                if(notas2 < 0 || notas2 > 10){
                    cout << "nota invalida" << endl;
                }else{
                    media = (nota_comp + notas2) / 2;
                    cout << "media = " << fixed << setprecision(2) << media << endl;
                    break;
                }
            }
        }
    }
    
    return 0;
}
