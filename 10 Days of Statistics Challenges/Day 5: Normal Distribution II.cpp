//https://www.hackerrank.com/challenges/s10-normal-distribution-2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double probability(double mean, double devi, double x){
    return 0.5 * (1 + erf((x - mean)/(devi*pow(2, 0.5))));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double mean = 70.0;
    double devi = 10.0;
    
    cout << fixed << setprecision(2);
    cout << 100 - (probability(mean, devi, 80.0))*100 << endl;
    cout << 100 - (probability(mean, devi, 60.0))*100 << endl;
    cout << probability(mean, devi, 60.0)*100 << endl;
    
    
    return 0;
}
