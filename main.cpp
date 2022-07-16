#include <iostream>
#include <cmath>
//A class that class that calculates the nth harmonic number
using namespace std;
class Harmonic{
public:
    double harmonic(int n);
};

double Harmonic::harmonic(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0/i;
    }
    return sum;
}

int main() {
    int a;
    cout <<"Enter a number"<<endl;
    cin >> a;
    Harmonic ham;
    double val = ham.harmonic(a);
    cout << val <<endl;
    return 0;
}
