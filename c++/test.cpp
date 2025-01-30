#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int soma = 0;
    int number;
    int quant = 25;
    vector<int> numeros;
    for(int i = 0; i < quant; i++){
        cin >> number;
        numeros.push_back(number);
        soma += number;
    }

    sort(numeros.begin(), numeros.end());
    for(int i= 0; i<quant; i++){
        if(i == (quant-1)){
            cout << numeros[i] << endl;
            break;
        }
        cout << numeros[i] << ",  ";
    }
    cout << "Média: " << static_cast<double>(soma)/quant << endl;
    if (quant % 2 == 0) {
        int middle1 = (quant-1) / 2;
        int middle2 = quant / 2;
        double mediana = (numeros[middle1] + numeros[middle2]) / 2.0;
        cout << "Mediana: " << mediana << endl;
    } else {
        cout << "Mediana: " << numeros[quant / 2] << endl;
    }
    return 0;
}