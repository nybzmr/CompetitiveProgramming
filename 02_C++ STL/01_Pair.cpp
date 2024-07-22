#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> p;
    // p = make_pair(2, "abc");
    p = {1, "abc"};
    pair<int, string> &p1 = p; // passing by ref else pass by value is default
    p1.first=3; 
    cout <<p.first<<endl<<p.second;

    //ararys using pairs
    pair<int, int>p_array[3];

    p_array[0]={1,1};
    p_array[1]={2,3};
    p_array[2]={2,4};
    for (int i = 0; i < 3; i++)
    {
      cout<<endl<< p_array[i].first << " "<< p_array[i].second;
    }
    
    return 0;
}