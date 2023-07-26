#include<iostream>
using namespace std;

int multiply(int a, int b){
    cout<<"Multiplication of "<<a<< " and"<<b <<": "<<a*b;
    return 0;
}

int main()
{
    int a,b;
    cout<<"Enter value of a and b that you want to multiply :- "<<endl;
    cin>>a>>b;
    int result = multiply(a,b);
    return 0;
}