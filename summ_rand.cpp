#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int max(int a, int b) {
  if(a > b) return a;
  else return b;
}

int main() {
  srand(time(NULL));
  
  for(int i = 0; i < 10; i++) {
    cout << max(random(), random()) << endl;
  }
}
