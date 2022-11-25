#include <iostream>
using namespace std;

int main() {
   int a = 1, b = a, n, c = 0;
    cin >> n;
    if (n>0) {
        cout << a << endl;
        cout << a << endl;
        c = a + b;
        while (c <= n) {
            cout << c << endl;
            b = a;
            a = c;
            c = a + b;
        }
    }
   return 0;
}
