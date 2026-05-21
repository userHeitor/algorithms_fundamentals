#include <iostream>
using namespace std;
#define DIM 2

void print_grid(int x[DIM][DIM]) {
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }    
    
}

int main(){
    int A[DIM][DIM];
    int B[DIM][DIM];
    
    for (int i = 0; i < DIM; i++){
        for (int j = 0; j < DIM; j++){
            cin >> A[i][j];
            B[i][j] = A[i][j]*A[i][j];
        }    
    }
    
    cout << "\n";
    cout << "Matriz: " << endl;
    print_grid(A);
    
    cout << "\n";
    cout << "Matriz com quadrados: " << endl;
    print_grid(B);
    
    return 0;
}