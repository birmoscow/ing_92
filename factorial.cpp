#include <iostream>

using namespace std;

int main() {
  int n, fact = 1;
  cin >> n;
  while( n ) {
    fact *= n;
    n--;
  }
  cout << fact;
}
