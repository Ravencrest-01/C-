#include<iostream>
using namespace std;

void insertionSort(int array[], int size)
{
    int i,j;

    for(i=1;i<size;i++){
        int key=array[i];
        j=i-1;
        while(j>-1&&array[j]>key){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
}

int main(){
    int customArray[]={35,2,15,55,8,63,27};
    int n = sizeof(customArray)/sizeof(customArray[0]);

    insertionSort(customArray, n);


    for(int k=0; k<n;k++){
        cout<<customArray[k]<<" ";
    }
}