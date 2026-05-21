#include <iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	cout << "\n";
	int A[N][N];
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) A[i][j] = 1;
			else A[i][j] = 0;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

}
