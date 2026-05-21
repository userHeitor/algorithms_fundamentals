#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

#define MAX 12.0
#define MIN 0.0

int main(){
    srand(time(0));
    float A[4][4];
    int greater_than_10 = 0;
    cout << fixed << setprecision(2);
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            A[i][j] = MIN + (float)rand() / RAND_MAX * (MAX - MIN);
            
            if (A[i][j] > 10) greater_than_10++;
        }    
    }
    
    cout << "\n";
    cout << "Matriz gerada: " << endl;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << " ";  
        }
        cout << endl;
    }
    
    cout << "\n";
    cout << "Essa matriz possui " << greater_than_10 << " numero(s) maiore(s) que 10.";
    
}