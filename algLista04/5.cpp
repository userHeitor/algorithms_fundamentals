#include <iostream>
using namespace std;
#define DIM 2

int main(){
    int A[DIM][DIM];
    
    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM ; j++) {
            cin >> A[i][j];
        }    
    }
    
    int determinante = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
    
    cout << "\n";
    cout << "Determinante: " << determinante << endl;
}