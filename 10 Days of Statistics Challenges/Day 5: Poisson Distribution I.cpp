//https://www.hackerrank.com/challenges/s10-poisson-distribution-1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int permu(int n){
    if(n == 1) return n;
    else return n*permu(n-1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    //p(lamda, k) = pow(lamda, k)*pow(e, -lamda)/permu(k)
    int e = 2.71828;
    int lamda = 2.5;
    int k = 5;
    
    cout << fixed << setprecision(3);
    cout << pow(lamda, k)*pow(e, -lamda)/permu(k) << endl;
    
    
    return 0;
}
