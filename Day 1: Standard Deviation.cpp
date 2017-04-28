//https://www.hackerrank.com/challenges/s10-standard-deviation
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

float meanfun(vector<int> num){
    double sum = 0;
    for(int i = 0; i < num.size(); i++){
        sum += num[i]*1.0;
    }
    return sum/num.size();
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    vector<int> num(n);
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    
    float mean = meanfun(num);
    //cout << "mean is: " << mean << endl;
    
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += (num[i] - mean) * (num[i] - mean);
    }
    
    cout << fixed << setprecision(1);
    cout << sqrt(sum/n) << endl;
    
    
    return 0;
}
