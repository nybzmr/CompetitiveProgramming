#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int>v){
  cout<< "size: "<< v.size() <<endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout<< v[i]<< " ";

  }
  cout<< endl;
  
}

int main() {
    // int a[10];
    // vector<int> v;
    // int n;
    // cin>> n;
    // for (int i = 0; i < n; i++)
    // {
    //   int x;
    //   cin>> x;
    //   v.push_back(x);

    // }
    // printVector(v);


    // // vector can be declared with initial size which can be changed afterwards
    // // such vectors have zero value initialisation
    // // eg:
    // vector<int>vec(10);
    // printVector(vec);
    // //we can initialize them with any value we want liek
    // vector <int>v (10, 3);
    // // initialises a vector of size 10 with each eelemnt as 3
    // printVector(v);
    // //adding 11th element
    // vec.push_back(7);
    // printVector(vec);




    // // v.pop_back //time complexity O(1)
    // vector<int>v;
    // v.push_back(1);
    // v.push_back(2);
    // v.pop_back();
    // printVector(v);
    // return 0;



    vector <int> v;
    v.push_back(7);
    v.push_back(8);
    vector<int>v2=v; // pass by value 
    // time complexity O(n)

}