//a
#include <iostream>
using namespace std;

void inputMatrix(int m[][10], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> m[i][j];
}

void printMatrix(int m[][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int r, c;
    int A[10][10], B[10][10], add[10][10], sub[10][10];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter Matrix A:\n";
    inputMatrix(A, r, c);

    cout << "Enter Matrix B:\n";
    inputMatrix(B, r, c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            add[i][j] = A[i][j] + B[i][j];
            sub[i][j] = A[i][j] - B[i][j];
        }
    }

    cout << "\nAddition:\n";
    printMatrix(add, r, c);

    cout << "\nSubtraction:\n";
    printMatrix(sub, r, c);

    return 0;
}
 //b
 #include <iostream>
 using namespace std;

 int main() {
     int A[10][10], B[10][10], C[10][10];

     cout << "Enter elements of Matrix A (10x10):\n";
     for (int i = 0; i < 10; i++)
         for (int j = 0; j < 10; j++)
             cin >> A[i][j];

     cout << "Enter elements of Matrix B (10x10):\n";
     for (int i = 0; i < 10; i++)
         for (int j = 0; j < 10; j++)
             cin >> B[i][j];

     // Initialize result matrix with 0
     for (int i = 0; i < 10; i++)
         for (int j = 0; j < 10; j++)
             C[i][j] = 0;

     // Matrix multiplication
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++) {
             for (int k = 0; k < 10; k++) {
                 C[i][j] += A[i][k] * B[k][j];
             }
         }
     }

     cout << "\nResultant Matrix (Multiplication):\n";
     for (int i = 0; i < 10; i++) {
         for (int j = 0; j < 10; j++)
             cout << C[i][j] << " ";
         cout << endl;
     }

     return 0;
 }
