#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char a;
    cin >> n >> a;
    int events;

    for(int i = 0; i < n; i++){
        cin >> events;
        if(events == 1){
            if(a == 'A'){
                a = 'B';
            }else{
                a = 'A';
            }
        }else if(events == 2){
            if(a == 'B'){
                a = 'C';
            }else{
                a = 'B';
            }
        }else if(events == 3){
            if(a == 'C'){
                a = 'A';
            }else{
                a = 'C';
            }
        }
    }
    cout << a << endl;

    return 0;
}