#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    double p, k;

    while ( cin>> n >> p ) {
        k = pow(p, 1.0/ n);
        cout << round(k) << endl;
    }
    return 0;

}