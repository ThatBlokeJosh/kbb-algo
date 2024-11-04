#include <cmath>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <tuple>
using namespace std;

struct eeaOutput {
  int gcd;
  int k;
  int l;
};

eeaOutput eea(int a, int b) {
  int z = a;
  int q = 0;
  int kTop = 0;
  int k = 1;
  int lTop = 1;
  int l = 0;

  while (b > 0) {
    q = floor(a/b);
    int tempB = b;
    b = a - (b*q);
    a = tempB;
    int tempK = k;
    k = kTop - (k*q);
    kTop = tempK;
    int tempL = l; 
    l = lTop - (l*q);
    lTop = tempL;
  }
  
  return {a, kTop, lTop};
}

int findInverse(int a, int b) {
  int k = eea(a, b).k;
  return k > 0 ? k : k + a;
}

