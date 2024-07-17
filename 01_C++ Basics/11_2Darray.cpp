#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin>> n>> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < m; j++)
          {
            cin>>a[i][j];
          }          
        }
        for (int i = 0; i < n; i++)
        {
          for (int j = 0; j < m; j++)
          {
            cout<<a[i][j]<<" ";
          }
          cout << endl;
        }
        
    }
    return 0;
}
// local limit of size of array declaration is 10^5 but global limit is 10^7 and it has to be a const variable