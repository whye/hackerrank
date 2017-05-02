//https://www.hackerrank.com/challenges/s10-spearman-rank-correlation-coefficient
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

vector<int> rankcal(vector<double> num){
    vector<int> ran(num.size());
    vector<double> dup = num;
    
    sort(dup.begin(), dup.end());
    for(int i = 0; i < num.size(); i++){
        for(int j = 0; j < num.size(); j++){
            if(num[i] == dup[j]){
                ran[i] = j + 1;
                break;
            }
        }
    }
    
    return ran;
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
    
    vector<int> rank_x = rankcal(x_vec);
    vector<int> rank_y = rankcal(y_vec);
    
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += pow(rank_x[i] - rank_y[i], 2);
    }
    
    //Spearman's Rank Correlation Coefficient: = 1 - 6*sum[(diff_rank)^2]/n(n^2 - 1)
    cout << fixed << setprecision(3);
    cout << 1 - 6*sum/(n*(pow(n, 2) - 1)) << endl;
    
    return 0;
}
