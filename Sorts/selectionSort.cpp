#include<iostream>
#include<vector>

using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i < n-1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout<<"After Selection Sort"<<endl;
    for(int i=0; i<n;i++){
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

    selectionSort(arr, size);
}