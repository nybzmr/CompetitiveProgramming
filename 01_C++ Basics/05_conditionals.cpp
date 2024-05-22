#include <bits/stdc++.h>
using namespace std;
int main(){
    // int a =2;
    // int b =3;
    // cout << (a==b);


    // //multiple conditions
    // int a =2;
    // int b =3;
    // int c =2;
    // cout << (a==b&&a!=c); 



    // // if condition
    // int n;
    // cin>>n;
    // if(n%2 ==0){
    //     cout<< "YES";
    // }
    // else{
    //     cout<<"NO";
    // }  
    // // only one of the condition of the if else ladder gets executed and as soon as it has been ecxecuted the program skips all other conditions of tht ladder.



    //scope
    // variables decralerd inside the curly braces can not be used outside tht curly braces. 


    //Loops

    // while
    // int i=0;
    // while ( i <=10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }


    // // a variable can nbe instantiated within for loop
    // for(int i = 0; i<=10; ++i){
    //     cout<<i<<endl;
    // }



    // //Question:  print
    // //*
    // //**
    // //***
    // //****
    // //*****
    // int n;
    // cin>> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         cout<< " * ";
    //     }
        
    //     cout<<endl;
    // }
    

    // Break and continue statements
    for (int i = 0; i < 10; i++)
    {
        if(i==6){
            break;
        }
        cout << i <<endl;
    }
    // break statemnt exits the for loop immediately
    // hence this poc will print numbers from 0 to 5

    //continue
    cout<< endl;
    for (int i = 0; i < 10; i++)
    {
        if(i==6){
            continue;
        }
        cout << i <<endl;
    }
    // continue statement skips the loop for tht iteration but continues as normal for next iterations
    // this poc prints number from 0-9 without printing 6
}

    