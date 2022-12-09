#include <iostream>

using namespace std;
int main() {
  int a, b;
  char sym;
  cout << "Введите выражение ";
  cin >> a >> sym >> b;

  if (sym == '+') {
    cout << "Ответ: " << a+b;
  }
 else if (sym == '-') {
   cout << "Ответ: " << a-b;
 }
  else if (sym == '*') {
    cout << "Ответ: " << a*b;
  }
  else if (sym == '/'){
    if (b == 0){
      cout << "Неправильный ввод данных";
      } else
    cout<< "Ответ: "  << a/b;
  }
  else if (sym == '%' ){
    if (b == 0){
      cout << "Неправильный ввод данных";
      } else
    cout << "Ответ: "  << a%b;
    }
  }
