//https://www.hackerrank.com/challenges/s10-pearson-correlation-coefficient
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double deviation(vector<double> num, double mean){
    double sum = 0.0;
    
    for(int i = 0; i < num.size(); i++){
        sum += pow(num[i]-mean, 2);
    }
    return sqrt(sum/num.size());
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    cin >> n;
    vector<double> x_vec(n);
    vector<double> y_vec(n);
    double mean_x = 0.0;
    double mean_y = 0.0;
    for(int i = 0; i < n; i++){
        cin >> x_vec[i];
        mean_x += x_vec[i];
    }
    mean_x /= n*1.0;
    for(int i = 0; i < n; i++){
        cin >> y_vec[i];
        mean_y += y_vec[i];
    }
    mean_y /= n*1.0;
    
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += (x_vec[i] - mean_x)*(y_vec[i] - mean_y);
    }
    
    cout << fixed << setprecision(3);
    cout << sum/(n*deviation(x_vec, mean_x)*deviation(y_vec, mean_y)) << endl;
    
    return 0;
}
