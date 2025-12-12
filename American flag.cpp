#include <iostream>
using namespace std;

int main() {
    
    int starRows = 9;     
    int starCols = 12;     
    int totalRows = 15;    
    int totalCols = 40;    

    for (int i = 0; i < totalRows; i++) {
       
        if (i < starRows) {

            for (int j = 0; j < starCols; j++) {
                if (j % 2 == 0) cout << "*";
                else cout << " ";
            }
    
            for (int j = starCols; j < totalCols; j++) {
                cout << "=";
            }
        } 
     
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

