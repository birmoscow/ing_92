#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(NULL));
  
  int a = random();
  cout << a << " " <<  random() << " " <<random() ;
}
