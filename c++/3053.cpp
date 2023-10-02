#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
  int n;
  string resp;
  cin >> n >> resp;
  int events;

  for (int i = 0; i < n; i++) {
    cin >> events;
    if (events == 1 ) {
      if(resp == "A"){
        resp = "B";
      }else if(resp == "B"){
        resp = "A";
      }else if(resp == "C"){
        resp = "C";
      }
    } else if (events == 2) {
      if(resp == "A"){
        resp = "A";
      }else if(resp == "B"){
        resp = "C";
      }else if(resp == "C"){
        resp = "B";
      }
    } else if (events == 3) {
      if(resp == "A"){
        resp = "C";
      }else if(resp == "B"){
        resp = "B";
      }else if(resp == "C"){
        resp = "A";
      }
    }
  }
  cout << resp << endl;

  return 0;
}
