//https://www.hackerrank.com/challenges/s10-the-central-limit-theorem-1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double probability(double devi, double mean, double x){
    double e = 2.71828;
    return (1/2.0) * (1 + erf((x - mean)/(devi*pow(2, 0.5))));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    /*  9800
        49
        205
        15*/
    
    // mean = n*mean_s
    // devi = sqrt(n)*devi_s
    
    double handleweight = 9800;
    double totalbox = 49;
    double mean = 205*totalbox;
    double devi = 15*sqrt(totalbox);
    
    cout << fixed << setprecision(4);
    cout << probability(devi, mean, handleweight) << endl;
    
    
    return 0;
}
