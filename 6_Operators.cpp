#include<iostream>
using namespace std;

int main()

{   
    
    int a=2, b=3;
    int x=1, y=2, z=3;
    
    //Unary operator of Post Increment(a++)& Pre(++a) Increment
    cout <<a++ + ++a<<endl;
    cout <<b-- + --b<<endl;

    //Binary operator(+,-,*,/,%)
    cout <<x+y+z<<endl; //Addition
    cout <<x-y<<endl; //Subtraction
    cout <<x*y<<endl; //Multiplication
    cout <<z/y<<endl; //Division
    cout <<z%y<<endl; //Modulas

    //Relational Operator (<, >, <=, >=, ==, !=)
    if (a>b)
        cout <<"a is greater than b"<<endl;
    else
    {
        cout <<"a is smaller than b"<<endl;
    }
    

    return 0;
}