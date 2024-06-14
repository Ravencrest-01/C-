#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }

    cout<<"After using Bubble Sort"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Enter the array size: ";
    int size;
    int arr[100];
    cin>>size;
    cout<<"\n"<<"Enter the elements in array"<<endl;
    for(int i=0; i<=size-1;i++){
        cin>>arr[i];
    }
    bubbleSort(arr, size);
    return 0;
}