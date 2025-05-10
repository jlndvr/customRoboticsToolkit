#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template<typename T>
T midpoint(T a, T b) {
  T m = a + ((b - a) / 2);
  return m;
} 

template<typename T>
void swapValues(T& a, T& b) {
  swap(a, b);
  cout << "A: " << a << " B: " << b << endl;
}
