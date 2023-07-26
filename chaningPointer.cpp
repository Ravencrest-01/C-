#include<iostream>
using namespace std;

int main(){

    int arr[5]={10,20,30,40,50};
    
    for(int i=0; i<5;i++)
    {
        cout<<arr[i]<<" ";
    };

    cout<<"\n\n";

    // Created a pointer and the made it point towards the first element of the array.
    int *arrPtr;
    arrPtr= &arr[0];

    for(int j=0;j<5;j++)
    {
        cout<<*arrPtr<<"\n";
        cout<<arrPtr<<"\n";
        arrPtr++;
    }

    return 0;
}