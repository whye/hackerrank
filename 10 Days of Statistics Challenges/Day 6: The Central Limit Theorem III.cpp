//https://www.hackerrank.com/challenges/s10-the-central-limit-theorem-3
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    double n = 100;
    double mean = 500;
    double devi = 80;
    double prob = 0.95;
    double z = 1.96;
    
    double marginError = z*devi/sqrt(n);
    
    cout << fixed << setprecision(2);
    cout << mean - marginError << endl;
    cout << mean + marginError << endl;
    
    return 0;
}
