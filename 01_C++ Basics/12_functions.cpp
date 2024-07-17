#include <bits/stdc++.h>
using namespace std;
void printHello(){
  cout<< "Helllo world";
}
int sum(int a, int b){
  return a+b;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        printHello();
        cout<< endl<< sum(2,3);

    }
    return 0;
}