#include <iostream>

using namespace std;


int main() {
  
  float sum = 0;
  int size;
  cin >> size;
  
  //Объявление массива на стеке, инициализация всех элементов нулями
  int arr[size] = {0};
  
  //Ввод массива
  for(int i = 0; i < size; i++) cin >> arr[i];
  
  
  //Считаем сумму
  for(int i = 0; i < size; i++) sum += arr[i];
  
  cout << sum / size;
  
  return 0;
}



/*
