#include<iostream>
using namespace std;

int main()
{
    int arrSize;
    cout<<"Enter the size of array you want:- "<<endl;
    cin>>arrSize;

    int array[100];

    for(int i=0;i<arrSize;i++)
    {
        cout<<"Enter the "<<i<< " element of array:- ";
        cin>>array[i];
    }

     for(int j=0; j<arrSize;j++)
    {
        cout<<array[j]<<" ";
    };
    cout<<endl;
    return 0;
}