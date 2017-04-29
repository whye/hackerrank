//https://www.hackerrank.com/challenges/s10-normal-distribution-1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
const double PI  = 3.141592653589793238463;

double probability(double devi, double mean, double x){
    double e = 2.71828;
    return (1/2.0) * (1 + erf((x - mean)/(devi*pow(2, 0.5))));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    double mean = 20;
    double deviation = 2;
    double hour = 19.5;
    double hour_begin = 20;
    double hour_end = 22;
    
    
    // prop = (1/[devi*sqrt(2*pi)]) e^(-[x-mean]^2/[2*devi^2])
    // P(X <= x) = 1/2.0 * (1 + erf([x - devi]/[devi*sqrt(2)]))
    cout << fixed << setprecision(3);
    cout << probability(deviation, mean, hour) << endl;
    
    cout << probability(deviation, mean, hour_end) - probability(deviation, mean, hour_begin) << endl;
    
    
    
    return 0;
}
