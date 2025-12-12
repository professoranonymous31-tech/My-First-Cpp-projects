#include <iostream>
using namespace std;

int main() {
    // Flag dimensions
    int starRows = 9;      // Rows containing stars
    int starCols = 12;     // Width of the star field
    int totalRows = 15;    // Total rows of the flag
    int totalCols = 40;    // Width of the flag

    for (int i = 0; i < totalRows; i++) {
        // Rows with the blue field + stars
        if (i < starRows) {
            // Print star field+
            for (int j = 0; j < starCols; j++) {
                if (j % 2 == 0) cout << "*";
                else cout << " ";
            }
            // Print rest of the stripe
            for (int j = starCols; j < totalCols; j++) {
                cout << "=";
            }
        } 
        // Rows without star field
        else {
            for (int j = 0; j < totalCols; j++) {
                cout << "=";
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
