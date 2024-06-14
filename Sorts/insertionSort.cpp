#include<iostream>
#include<vector>
#include <bits/stdc++.h> //STL library
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
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
    insertionSort(arr, size);
    return 0;
}