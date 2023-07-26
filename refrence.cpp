#include<iostream>
using namespace std;

int main()
{
    int ival = 1024;
    int &refVal = ival;
    cout<<ival<<"\nvalue of &refVal  "<<refVal;

    refVal=2;
    int ii = refVal;
    cout<<"\nrefVal value  "<<refVal<<"\nvalue of ii  "<<ii;
    cout<<ival<<"\nvalue of &refVal  "<<refVal;
    cout<<ii;
    
    return 0;
}
