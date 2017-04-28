//https://www.hackerrank.com/challenges/s10-geometric-distribution-2

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float s = 1.0/3.0;
    cout << fixed << setprecision(3);
    cout << 1 - pow(1-s, 5) << endl;
    return 0;
}
