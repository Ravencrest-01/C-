#include <iostream>
#include <vector>

using namespace std;

void setZeros(vector<vector<int>>& A) {
    if (A.empty()) return;

    int numRows = A.size();
    int numCols = A[0].size();

    vector<int> zeroRows(numRows, 0); //[0,0,0,0]
    vector<int> zeroColumns(numCols, 0);//[0,0,0,0]


    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (A[i][j] == 0) {
                zeroRows[i] = 1;//[0,1,0,0]
                zeroColumns[j] = 1;//[1,0,0,0]
            }
        }
    }


    for (int i = 0; i < numRows; i++) {
        if (zeroRows[i] == 1) {
            for (int j = 0; j < numCols; j++) {
                A[i][j] = 0;
            }
        }
    }


    for (int i = 0; i < numCols; i++) {
        if (zeroColumns[i] == 1) {
            for (int j = 0; j < numRows; j++) {
                A[j][i] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {{0,0}, {1,1}};
    setZeros(matrix);

    for (const auto& row : matrix) {
        for (int elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
