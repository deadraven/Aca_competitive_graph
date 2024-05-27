#include <iostream>
using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    long long n, k;
    cin >> n >> k;
    
    long long h = (n + k - 1) / k;
    k =k*h;
    cout << (k + n - 1) / n << endl;
  }
  return 0;
}