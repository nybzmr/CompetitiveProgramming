#include <bits/stdc++.h>
using namespace std;
int main(){
    // string str = "Hello";
    // cout<< str << endl;
    // string anotherStr;
    // cin >> anotherStr;

    // // string take input until we get a space or a new line in input
    // //which means we can take input of single words in string

    // string result = str + anotherStr;
    // cout<< result << endl; 
    // // strings can be concatenated using the + operator
    // // strings can also be compared using == operator

    // int r = str == anotherStr;
    // cout<< r;
    // // prints one if input is Hello rest 0 in every other case

    // string str = "Hello";
    // cout << str[2];
    // // indvidual characters can be accesed like this
    // // this line prints character at third place or second index 


    // cout << str.size();
    // // gives the size of the stirng;


    // // Getline function
    // string str1, str2;
    // getline(cin, str1);
    // cout<< str1;


    int t;
    cin >> t;
    cin.ignore();
    //When you don't use cin.ignore() after reading an integer with cin >> t, the newline character ('\n') that is generated when you press Enter after typing the integer remains in the input buffer. This newline character is then immediately consumed by the first call to getline(cin, s), resulting in an empty string for s.
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << s << endl;
    }
    //When you use cin.ignore() after reading the integer, the newline character left in the input buffer is ignored, and the next getline reads the actual next line of input
}