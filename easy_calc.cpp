#include <iostream>

//using namespace std;

int main() { 
  int a, b;
  char sym;
  
  std::cin >> a >> sym >> b;   //ASCII
  
  if(sym == '+') {
    std::cout << " a + b = " << a + b;
  }
  else if(sym == '-') {
    std::cout << " a - b = " << a - b;
  }
  else if(sym == '*') {
    std::cout << " a * b = " << a * b;
  }
  else if(sym == '/' && b != 0) {
    std::cout << " a / b = " << a / b;
  }
  else { 
    std::cout << "Ошибка";
  }
} 
  
  
  
