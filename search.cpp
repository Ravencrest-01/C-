#include<iostream>
using namespace std;

int main()
{
    int arrSize;
    cout<<"Enter the size of array: "; 
    cin>>arrSize;

    int array[100];


    // Taking input in array
    for(int i=0;i<arrSize;i++)
    {
        cout<<"Enter the "<< i << " element of array:- ";
        cin>>array[i];
    };

    cout<<"Original array :- ";
    // Printing original array
    for (int j=0; j < arrSize; j++)
    {
        cout<<array[j]<<" ";
    };
    cout<<endl;

    int num;
    cout<<"Enter the number you want to find:- ";
    cin>>num;

    // Creating Pointer to point and iterate over every element of array
    int *elePtr;
    elePtr = &array[0];
    bool found = false;

    for(int k=0;k<arrSize;k++)
    {
        if(*elePtr==num){
            cout<<"Number is present at "<< k<<endl;;
            found=true;
            break;
        }
        elePtr++;
    }

    if(found!=true){
        cout<<"Number not Found";
    }

    cout<<"The program ends"<<endl;
    return 0;
}