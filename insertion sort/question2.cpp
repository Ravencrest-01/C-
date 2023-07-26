// Implement the insertion sort algorithm in your preferred programming language and sort the array [12, 45, 23, 6, 8, 19, 56] using it.

#include<iostream>
using namespace std;

void insertionSort(int array[], int size)
{
    int i, j;

    for (i = 1; i < size; i++) {
        int key = array[i];
        j = i - 1;
        while (j > -1 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main(){

    int test[]={12, 45, 23, 6, 8, 19, 56};
    int n = sizeof(test)/sizeof(test[0]);
    insertionSort(test, n);
    int m;
    for(m=0;m<n;m++){
            cout<<test[m]<<" ";
    }
}