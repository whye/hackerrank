//https://www.hackerrank.com/challenges/s10-binomial-distribution-1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float boys = 1.09;
    float girls = 1.0;
    
    float success = boys/(boys+girls);
    
    float prop = 0.0;
    
    prop += pow(1-success, 6);
    prop += 6*success*pow(1-success, 5);
    prop += 15*pow(success, 2)*pow(1-success, 4);
    
    cout << fixed << setprecision(3);
    cout << 1 - prop << endl;
    
    return 0;
}
