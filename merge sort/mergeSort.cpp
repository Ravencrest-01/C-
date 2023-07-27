#include<iostream>
using namespace std;

int merge(vector<int>& arr, int left, int mid, int right){

    int n1 = mid-left+1;
    int n2 = right-mid;

    // Creating Temporary arrays
    vector<int> L(n1);
    vector<int> R(n2);

    // Copying divided arrays into temporary arrays
    for(int i=0;i<n1;i++){
        L[i]=arr[left+i];
    }

    for(int j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }

    int i =0;
    int j =0;
    int k = left;
    while(i<n1&&j<n2){
        if(L[i]<R[j]){
            arr[k]=L[i];
            i++;
        }


    }
    
}

int mergeSort(vector<int>& arr, int left,int right){
    if(left<right){
        int mid = left+(right-left)/2;
    }

    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    
}


int main()
{

    return 0;
}