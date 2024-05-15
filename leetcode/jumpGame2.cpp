#include <iostream>
#include <vector>
using namespace std;

int jump(vector<int>& nums) {
    int jumps = 0;
    int currentEnd = 0;
    int farthest = 0;

    for (int i = 0; i < nums.size() - 1; ++i) {
        farthest = max(farthest, i + nums[i]);

        if (i == currentEnd) {
            ++jumps;
            currentEnd = farthest;

            if (currentEnd >= nums.size() - 1) {
                break;
            }
        }
    }

    return jumps;
}

int main() {
    vector<int> v = {2, 3, 1, 1, 4, 6, 7, 2, 1, 5};
    cout << "Number of Jumps: " << jump(v) << endl;

    return 0;
}
