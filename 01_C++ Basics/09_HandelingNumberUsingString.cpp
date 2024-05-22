#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "928094337846237687698170174934747894743783643497243689578659765764588764964783548736874587548";
    //Very large numbers cant be stored in long or double are stored in string nd can be accesed using string
    int last_digit = s[s.size()-1]-'0';
    cout << last_digit;
}