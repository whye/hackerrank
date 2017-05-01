//https://www.hackerrank.com/challenges/s10-the-central-limit-theorem-2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double mean_n(double n, double mean_s){
    return n*mean_s;
}

double devi_n(double n, double devi_s){
    return sqrt(n)*devi_s;
}

double probability(double devi, double mean, double x){
    double e = 2.71828;
    return (1/2.0) * (1 + erf((x - mean)/(devi*pow(2, 0.5))));
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    double n = 100;
    double x = 250;
    double mean = 2.4;
    double devi = 2.0;
    
    cout << fixed << setprecision(4);
    cout << probability(devi_n(n, devi), mean_n(n, mean), x) << endl;
    
    return 0;
}
