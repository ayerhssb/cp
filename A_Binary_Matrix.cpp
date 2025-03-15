#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solveTestCase(int n, int m, const vector<string>& matrix) {
    vector<int> rowXor(n, 0);
    vector<int> colXor(m, 0);
    
    // Calculate row-wise and column-wise XORs
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rowXor[i] ^= (matrix[i][j] - '0');
            colXor[j] ^= (matrix[i][j] - '0');
        }
    }

    // Count how many rows and columns have XOR = 1 (odd number of 1s)
    int rowChanges = 0, colChanges = 0;
    for (int i = 0; i < n; i++) {
        if (rowXor[i] == 1) rowChanges++;
    }
    for (int j = 0; j < m; j++) {
        if (colXor[j] == 1) colChanges++;
    }

    // The minimum number of changes is the max of row and column fixes
    return max(rowChanges, colChanges);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> matrix(n);
        for (int i = 0; i < n; i++) {
            cin >> matrix[i];
        }
        
        // Solve the current test case
        cout << solveTestCase(n, m, matrix) << endl;
    }
    return 0;
}
