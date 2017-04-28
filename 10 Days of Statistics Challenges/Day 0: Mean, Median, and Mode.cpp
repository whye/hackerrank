//https://www.hackerrank.com/challenges/s10-basic-statistics
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    int n;
    cin >> n;
    vector<int> num(n);
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> num[i];
        sum += num[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << (float)sum/(float)n << endl;
    
    sort(num.begin(), num.end());
    
    if(n%2 == 0){
        cout << ((float)num[n/2] + (float)num[n/2 - 1])/2 << endl;
    }else{
        cout << (float)num[n/2] << endl;
    }
    
    int longlength = 1;
    int longint = 0;
    for(int i = n; i >= 0; i--){ 
        int temp = 1;
        while(i - temp >= 0){
            if(num[i] == num[i-temp]){
                temp ++;
            }else
                break;
        }
        
        if(longlength <= temp){
            longint = num[i];
            longlength = temp;
        }
        
        i = i - temp + 1;
    }
    cout << longint << endl;
    
    
    return 0;
    
}
