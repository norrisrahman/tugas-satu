#include <iostream>
#include <limits>
#include <stdlib.h>

using namespace std;

int main() {
  cout << "Press Enter to Continue";
  cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
  cout << "Hello" << endl << flush;
  main ();
  return 0;
}