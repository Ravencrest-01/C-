#include<iostream>
using namespace std;

int main()
{
    // int ival = 1024;
    // int *p = &ival;
    // cout<<*p<<"\n";

    // double dval=1023;
    // double *pd = &dval;
    // double *pd2 = pd;
    // cout<<*pd<<"\n"<<*pd2<<"\n";
    
    // int i =42;
    // cout<<i<<"\n";

    // int *pi = 0;
    // cout<<"*pi is not defined so it won't print and the output will stop at this point if we try to print only the value of the pointer that is unassigned."<<"\n";
    
    // int *pi2 = &i;
    // cout<<*pi2<<"\n";

    // int *pi3;
    // cout<<pi3<<"\n";

    // pi3 = pi2;
    // cout<<*pi3<<" "<<*pi2<<"\n";

    // pi2=0;
    // cout<<"*pi2 is not defined so it won't print and the output will stop at this point if we try to print only the value of the pointer that is unassigned."<<"\n";

    // pi = &i;
    // cout<<*pi<<"\n"<<pi<<"\n";

    // *pi = 0;
    // cout<<*pi<<"\n"<<pi<<"\n"<<i;

    int i = 24;

    int *ptr;

    ptr = &i;
    cout<<*ptr<<"\n";

    int *ptr2;
    ptr2=&i;
    cout<<*ptr2<<"\n";
    *ptr2 = 2;
    cout<<*ptr2<<" "<<i<<"\n";


    return 0;
}