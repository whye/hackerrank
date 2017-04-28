//https://www.hackerrank.com/challenges/s10-weighted-mean
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    vector<int> num(n);
    vector<int> weight(n);
    int sum = 0;
    int sumweight = 0;
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    for(int i = 0; i < n; i++){
        cin >> weight[i];
        sum += num[i] * weight[i];
        sumweight += weight[i];
    }
    
    float ans = (float)sum/((float)sumweight*1.0);
    
    cout.setf(ios::fixed);
    cout << setprecision(1) << ans  << endl;
    
    return 0;
}
