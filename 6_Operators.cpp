#include<iostream>
using namespace std;

int main()

{   
    
    int a=2, b=3, m, n, o;
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
    cout <<"Enter the value of m"<<endl;
    cin >>m;
    if (a>m)
        cout <<"a is greater than m"<<endl;
    else if (x<m)
        cout <<"x is smaller than m"<<endl;
    else
    {
        cout <<"a is equal to m"<<endl;
    }

    //Logical Operator
    cout <<"Enter the value of n"<<endl;
    cin >>n;
    cout <<"Enter the value of o"<<endl; 
    cin >>o;
    if (n==5 && o==5)
        cout <<"n and o are equal"<<endl;
    else
    {
        cout <<"n and o are not equal"<<endl;
    }

    //
    


    

    return 0;
}