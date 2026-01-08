#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, colume;
    int sum = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >>  colume;

    vector<vector<int>> matrix(rows, vector<int>( colume));

    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colume ; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << "Sum of all elements = " << sum << endl;

    return 0;
}