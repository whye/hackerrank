//https://www.hackerrank.com/challenges/s10-poisson-distribution-2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    //E[X^2] = mean+mean^2 
    double mean_a = 0.88;
    double mean_b = 1.55;
    
    cout << fixed << setprecision(3);
    cout << 160.0 + 40.0 * (mean_a + pow(mean_a, 2)) << endl;
    cout << 128.0 + 40.0 * (mean_b + pow(mean_b, 2)) << endl;
    
    return 0;
}
