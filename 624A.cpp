#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double d, L, v1, v2;
    double t;
    cin >> d >> L >> v1 >> v2;
    t = (L - d) / (v1 + v2);
    cout << setprecision(21) << t;
}