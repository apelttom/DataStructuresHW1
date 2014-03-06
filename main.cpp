#include <iostream>
#include "exercises.h"

using namespace std;

void matrixMultpct(){
    int rowA = 0,colA = 0,rowB = 0,colB = 0;
    int **matrixA;
    int **matrixB;
    int **matrixC;
    cout << "Matrix multiplication." << endl;
    cout << "Please enter the matrix A dimensions:" << endl;
    cout << "rows = "; cin >> rowA;
    cout << "columns = "; cin >> colA;
    cout << "Please enter the matrix B columns and rows dimensions:" << endl;
    cout << "rows = "; cin >> rowB;
    cout << "columns = "; cin >> colB;
    if(colA != rowB){
        cout << "Matrix A has to have the same number of columns as matrix B!"<< endl <<"Ending the program..." << endl;
        return;
    }

//    inicialization
    matrixA = new int*[rowA];
    for(int i = 0; i <rowA; ++i){
        matrixA[i] = new int[colA];
    }
    matrixB = new int*[rowB];
    for(int i = 0; i <rowB; ++i){
        matrixB[i] = new int[colB];
    }
    matrixC = new int*[rowA];
    for(int i = 0; i <rowA; ++i){
        matrixC[i] = new int[colB];
    }

//    input
    cout << "Please enter data for matrix A:" << endl;
    for(int i=0;i<rowA;i++){
        for(int j=0;j<colA;j++){
            cin >> matrixA[i][j];
        }
    }
    cout << "Please enter data for matrix B:" << endl;
    for(int i=0;i<rowB;i++){
        for(int j=0;j<colB;j++){
            cin >> matrixB[i][j];
        }
    }

//    multiplying matrices
    cout << "Multiplying matrices..." << endl;
    for(int i=0;i<rowA;i++){
        for(int j=0;j<colB;j++){
            matrixC[i][j] = 0;
            for(int p=0;p<colA;p++){
                matrixC[i][j] = matrixC[i][j] + matrixA[i][p]*matrixB[p][j];
            }
        }
    }

//    output
    cout << "Matrix C:" << endl;
    for(int i=0;i<rowA;i++){
        for(int j=0;j<colB;j++){
            cout << matrixC[i][j] << " ";
        }
        cout << endl;
    }
    delete[] matrixA;
    delete[] matrixB;
    delete[] matrixC;
}

int main(){
//    matrixMultpct();
    Exercises *eTmp = new Exercises;
//    exercise1();
//    exercise2();
    eTmp->exercise5();
    delete eTmp;
}
