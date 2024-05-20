#include <bits/stdc++.h>
using namespace std;
int main(){
    // // variables
    // int a=10;
    // int b=36;
    // int sum = a+b;

    //datatypes
    //char, int, float, double, bool
    char c = 'a';
    int a = 10;
    float f = 10.66; // float and double stores decimal values
    // long int and long long int are used to declare larger integer values

    cout << c << a << endl<< f; // endl adds a new line
    // output => 
    //a10
    //10.66

    // operators
    //arithematic
    //+, -, / ,*, %,
    // relational
    // ==, !=, < , >, >=, <=

    // // ASCII Values
    // // Capital A => 65
    // // Capital Z => 90
    // // Small a => 97
    // // Small z => 122
    // // To check the ascii value
    // cout << (int)c;


    // input and output;
    int a;
    double b;
    char c;
    cin>>a >> b >> c;
    cout<< a <<  " " << b << " " << c;


    // datatype conversion precedence
    // float/double > int > char 

    // range
    // -10^9 < int < 10^9    
    // -10^12 < long int < 10^12
    // -10^18 < long long int < 10^18
    

    // imp
    int a = 10000;
    int b = 10000;
    int c = a*b;
    cout << c;
    // gives error and wrong answer because c cant store such big numbers

    int a = 10000;
    int b = 10000;
    long c = a*b;
    cout<< c;
    // gives error because a and b are int so the caluclation is done in int and result is also int

    int a = 10000;
    int b = 10000;
    long long int c = a*1LL*b;
    cout<< c;
    // gives the correct answer as 1LL means first the nu,mbers get converted to long long int and then tht gets stored into the long long int container



    // We do not use double or float as there is precision error because they deal with bigger number but at the cost of precision

}