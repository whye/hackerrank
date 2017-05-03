//https://www.hackerrank.com/challenges/s10-least-square-regression-line
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


//b = [n*sum(xi*yi)-sum(xi)*sum(yi)]/[n*sum(xi^2)-(sum(xi))^2]
//a = meany - b*meanx
vector<double> regression(vector<double> x, vector<double> y){
    double sumxy = 0.0;
    double sumx = 0.0;
    double sumy = 0.0;
    double sumx2 = 0.0;
    for(int i = 0; i < x.size(); i++){
        sumxy += x[i]*y[i];
        sumx += x[i];
        sumy += y[i];
        sumx2 += pow(x[i], 2);
    }
    vector<double> ab(2);
    ab[1] = (x.size() *sumxy - sumx*sumy)/(x.size()*sumx2 - pow(sumx, 2));
    ab[0] = sumy/y.size() - ab[1]*sumx/x.size();
    
    return ab;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n = 5;
    vector<double> x(n);
    vector<double> y(n);
    for(int i = 0; i < n; i ++){
        cin >> x[i] >> y[i];
    }
    
    vector<double> ab = regression(x, y);
    
    //y = a + bx
    //x = 80
    cout << fixed << setprecision(3);
    cout << ab[0] + 80*ab[1] << endl;
    
    return 0;
}
