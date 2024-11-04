#include <bitset>
#include <iostream>
using namespace std;

int sam(int a, int e) {
  int o = 1;
  int t = a;
  while (e != 0) {
    if (e % 2 == 1) {
      o = (o * t);
    } 
    t = (t * t);
    e /= 2;
  }
  return o;
}

