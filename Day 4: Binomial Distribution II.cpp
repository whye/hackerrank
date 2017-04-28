//https://www.hackerrank.com/challenges/s10-binomial-distribution-2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int permu(int n){
    if(n == 0) return 1;
    else if(n == 1) return 1;
    else return n*permu(n-1);   
}

int select(int n, int x){
    return permu(n)/(permu(x)*permu(n-x));
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float faulty = 0.12;
    
    float success = 0;
    
    success += select(10, 0)*pow(0.12, 0)*pow(1-0.12, 10);
    success += select(10, 1)*pow(0.12, 1)*pow(1-0.12, 9);
    float success2 = select(10, 2)*pow(0.12, 2)*pow(1-0.12, 8);
    //cout << select(10, 2) << endl;
    
    cout << fixed << setprecision(3);
    
    cout << success + success2 << endl;
    cout << 1-success << endl;
    
    return 0;
}
