// Sorting Student Records:

// Description:
// You are given a list of student records, each containing the name of the student and their corresponding scores in a test. Your task is to implement the insertion sort algorithm to sort the records based on scores in ascending order. The records should be rearranged so that the student with the lowest score comes first, and the student with the highest score comes last.

// Input:
// An array of student records, where each record contains two elements:

// name: A string representing the name of the student. (e.g., "John", "Alice", "Mike")
// score: An integer representing the score obtained by the student in the test. (e.g., 85, 92, 78)
// Output:
// The sorted array of student records based on their scores in ascending order.

#include<iostream>
#include<vector>
using namespace std;


struct studentRecords{
    string name;
    int score;
};

void insertionSort(vector<studentRecords>& record)
{
   int n = record.size();
   for(int i=0;i<n;i++){
    studentRecords key = record[i];
    int j= i-1;
        while(j>-1&&record[j].score>key.score){
            record[j + 1] = record[j];
            j--;
        }
        record[j+1]=key;    
   }

}


int main(){
    
    // Test Case-1
    vector<studentRecords> record ={
        { "John", 85 },  
        { "Alice", 92 },  
        { "Mike", 78 },  
        { "Emily", 90 },  
        { "Robert", 88 }
    };

      insertionSort(record);

    cout << "Sorted Student Records:" << endl;
    for (const auto& record : record) {
        cout << record.name << ": " << record.score << endl;
    }

}