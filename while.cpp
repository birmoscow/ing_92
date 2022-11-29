#include <iostream>

using namespace std;

int main() {
  
  int a = 1;
  //Цикл с предусловием

  while (a <= 10) {
    cout << a << " ";
    a++;
  }
  
  //break; - остановить цикл
  // continue - пропустить шаг, вернуться к проверке условия
  
  a = 1;
  
  //Цикл с постусловием
  do {
    cout << a;
    a++;
  } while (a <= 10);
  
  return 0;
}
