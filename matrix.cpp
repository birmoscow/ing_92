#include <iostream>

using namespace std;

int main() {
  
  int row, col;
  cin >> row >> col;
  //Создание матрицы (двумерного массива) на стеке
  int matrix[row][col];
  
  // Заполнение таблицы по правилу инд.стр. * инд.столбца
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      matrix[i][j] = i * j;
    }
  }
  
  //Вывод таблицы
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cout << matrix[i][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}
