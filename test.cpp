#include <bits/stdc++.h>
using namespace std;
int main (){
  int* a = new int;
  *a = 5;
  cout << *a << endl;
  int b = 10;
  a = &b;
  cout << *a << endl;
  return 0;
}