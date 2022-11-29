#include <iostream>

using namespace std;

void print(int **matr, int row, int col) {
  //Вывод таблицы
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cout << matr[i][j] << "\t";
    }
    cout << endl;
  }
}

int main() {
  int row, col;
  //Ввод количества строк и столбцов
  cin >> row >> col;
  
  //Выделение памяти под двумерный динамический массив
  int **matrix = new int * [row];
  for(int i = 0; i < row; i++) {
    matrix[i] = new int[col];
  }
  
  // Заполнение матрицы элементами по ф-ле инд.стр * инд. столбца
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      matrix[i][j] = i * j;
    }
  }
  
  print(matrix, row, col);
}
