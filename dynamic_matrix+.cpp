#include <iostream>

using namespace std;


//Вывод матрицы
void print(int **matrix, int row, int col) {
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
}


//Выделение памяти под матрицу
int ** createMatrix(int row, int col) {
  int **matrix = new int * [row];
  for(int i = 0; i < row; i++) {
    matrix[i] = new int[col];
  }
  return matrix;
}


//Освобождение памяти
int ** deleteMatrix(int **matrix, int row, int col) {
  for(int i = 0; i < row; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;
  return NULL;
}

int main() {
  int row, col;
  cin >> row >> col;
  int **matr = createMatrix(row, col);
  
  print(matr, row, col);

  matr = deleteMatrix(matr, row, col);
  cout << matr;
}
