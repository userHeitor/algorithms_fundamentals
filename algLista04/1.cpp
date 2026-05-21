#include <iostream>
#include <climits>
using namespace std;
#define DIM 3

int main(){
	int A[DIM][DIM], maior = INT_MIN, menor = INT_MAX;
	int linhaMaior, colunaMaior, linhaMenor, colunaMenor;
	
	for (int i = 0; i < DIM; i++){
		for (int j = 0; j < DIM; j++) {
			cin >> A[i][j];
			int key = A[i][j];
			
			if (key > maior){
				maior = key;
				linhaMaior = i;
				colunaMaior = j;
			} 
			
			if (key < menor){
				menor = key;
				linhaMenor = i;
				colunaMenor = j;
			}
		}
	}
	
	cout << "\n";
	cout << "Menor = " << menor << " (linha " << linhaMenor + 1 << ", coluna " << colunaMenor + 1 << ")" << endl;
	cout << "Maior = " << maior << " (linha " << linhaMaior + 1 << ", coluna " << colunaMaior + 1 << ")" << endl;

}