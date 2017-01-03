#include <iostream>
#include "../src/metadelta.h"
using namespace std;

int main(){
  cout << "Testing Metadelta Suite...\n" << endl;

  // Init Metadelta object
  Metadelta* delta;
  string expression = "2x";

  cout << delta->derive(&expression) << endl;
}
