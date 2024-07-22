#include <bits/stdc++.h>
using namespace std;
void printVector(vector<pair<int,int> >v){
  cout<< "size: "<< v.size() <<endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout<< v[i].first<< " "<<v[i].second<<endl;

  }
  cout<< endl;
  
}
int main() {
    // //vector of pair
    // vector< pair<int,int>>v={{2,3},{5,7},{8,10}};
    // printVector(v);
    // return 0;

    //Array of vectors
    int N;
    cin >>N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
      int n;
      cin>> n;
      for (int j = 0; j < n; j++)
      {
        int x;
        cin >>x;
        v[i].push_back(x);
      }
      
    }
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < v[i].size(); j++)
      {
        cout<< v[i][j];
      }
      cout<< endl;
    }
    
}