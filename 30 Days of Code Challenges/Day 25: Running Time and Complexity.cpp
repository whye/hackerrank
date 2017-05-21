//https://www.hackerrank.com/challenges/30-running-time-and-complexity

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isprime(int n){
    if(n == 1) return false;
    if(n == 2) return true;
    for(int i = 2; i*i <= n; i ++){
        if(n%i == 0)
            return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin >> n;
    int temp;
    for(int i = 0; i < n; i ++){
        cin >> temp;
        if(isprime(temp)) cout << "Prime" << endl;
        else cout << "Not prime" << endl;
    }
    
    return 0;
}
