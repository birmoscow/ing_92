#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void sort(int arr[], int size) {
  // Алгоритм сортировки
  for(int i = 0; i < size; i++) {
    for(int j = i + 1; j < size; j++) {
      if(arr[i] < arr[j]) {
        swap(arr[i], arr[j]);
      }
    }
  }
}

int main() {
  srand(time(NULL));
  int size;
  cin >> size;
  int arr[size];
  
  //Заполнение массива рандомными числами
  for(int i = 0; i < size; i++) arr[i] = rand();
  
  sort(arr, size);
  
  //Вывод массива
  for(int i = 0; i < size; i++) cout << arr[i] << " ";
  
}
