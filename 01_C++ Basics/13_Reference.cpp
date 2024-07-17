#include <bits/stdc++.h>
using namespace std;
void increment(int &n, int n1){// n is passed by refernce nd n1 is passed by value
  ++n;
  n1++;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a = 3;
        int b = 5;
        increment(a,b);
        cout<< a<<endl << b;
    }
    return 0;
}
// pass by reference changes the value in main function but pass by value does not change value in main function
// array are passed by refernce only and never by value 