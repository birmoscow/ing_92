#include <iostream>

using namespace std;

int main() {
  int n, fact = 1;
  cin >> n;
  do {
    fact *= n;
    n--;
  } while(n > 0);
  cout << fact;
}
