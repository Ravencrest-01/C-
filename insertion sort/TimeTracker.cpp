// Time Tracking:

// Description:
// You have a log of time entries for tasks performed by employees. Each entry contains the task name and the time taken to complete it. Your task is to implement the insertion sort algorithm to sort the log based on the time taken in ascending order. This will help you analyze the time taken for different tasks and identify any potential time management issues.

// Input:
// An array of time entries, where each entry contains two elements:

// taskName: A string representing the name of the task. (e.g., "Project A", "Meeting", "Research")
// timeTaken: An integer representing the time taken to complete the task (in minutes).
// Output:
// The sorted array of time entries based on the time taken in ascending order.

#include<iostream>
#include<vector>
using namespace std;

struct timeTracker{
    string taskName;
    int time;
};

int insertionSort(vector<timeTracker>& records)
{
    int n = records.size();
    for(int i=0;i<n;i++){
        timeTracker key = records[i];
        int j = i-1;
        while(j>-1&&records[j].time>key.time){
            records[j+1]=records[j];
            j--;
        }
        records[j+1]=key;
    }
}


int main()
{
    vector<timeTracker> records ={
        {"Meeting", 20},
        {"Task B",35 },
        {"Project C",180},
        {"Lunch Break",60},
        {"Task D",45},
        {"Task E",50}
    };

    insertionSort(records);

    for(const auto& records: records){
        cout<<records.taskName<<":"<<records.time<<endl;
    }
}