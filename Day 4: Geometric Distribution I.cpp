//https://www.hackerrank.com/challenges/s10-geometric-distribution-1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    float prop = 1.0/3.0;
    
    cout << fixed << setprecision(3);
    cout << pow(1-prop, 4)*pow(prop, 1) << endl;
    
    return 0;
}
