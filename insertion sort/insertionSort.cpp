#include<iostream>
using namespace std;



int main(){
    int array[5]={10,5,12,6,2};
    int sortedArray[100];
    int i,j;

    for(j=1; j<5;j++){
        int key=array[j];
        i=j-1;
        while(i>-1&&array[i]>key){
            array[i+1]=array[i];
            i--;
        }
        array[i+1]=key;
    }
    
    for(int k=0; k<5;k++){
        cout<<array[k]<<" ";
    }
    

    return 0;
}