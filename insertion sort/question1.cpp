// Given the array [5, 2, 9, 1, 5], show the array after each pass of the insertion sort algorithm.

#include<iostream>
using namespace std;

void sort(int arr[], int size)
{
    int i,j,k;

    for(i=1;i<size;i++){
        cout<<"\n";
        int key = arr[i];
        j=i-1;
        while(j>-1&&arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=key;

        cout<<i<<"pass\n";

        for(k=0;k<size;k++){
            cout<<arr[k]<<" ";
        }
    }
}

int main()
{
    int test[] = {5,2,9,1,5};
    int n = sizeof(test)/sizeof(test[0]);
    int m;
    cout<<"\nOriginal array\n";

    for(m=0;m<n;m++){
            cout<<test[m]<<" ";
        }
    sort(test, n);
    cout<<"\n";
    for(m=0;m<n;m++){
            cout<<test[m]<<" ";
        }
}