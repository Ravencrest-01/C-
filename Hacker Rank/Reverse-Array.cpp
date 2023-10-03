#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ind;

    for (int i = 0; i < nums.size(); i++) {
      for (int j = nums.size() - 1; j > -1; j--) {
        int sum = 0;
        if (i != j) {
          sum = nums[i] + nums[j];
          if (sum == target) {
            ind.push_back(i);
            ind.push_back(j);
            break;
          }
        }
      }
    }
    return ind;
}
int main(){
    vector<int> array ={1,3,6,7,8};
    twosum(array, 4);
    return 0;
}