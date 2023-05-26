#include <iostream>
#include <string> 

#include "lcs.h"
using namespace std;

int main(int argc, char* argv[]) {
  string res = lcs(argv[1], argv[2]);

  cout << res << endl;;

  return 0;
}