//https://www.hackerrank.com/challenges/s10-quartiles
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int mid(vector<int> &num){
    int n = num.size();
    //cout << n;
    if(n%2 == 1){
        return num[n/2];
    }     
    else{
        return (num[n/2-1] + num[n/2])/2;
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    cin >> n;
    vector<int> num(n);
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    
    sort(num.begin(), num.end());
    
    for(int i = 0; i < n; i++){
       // cout << num[i] << ' ';
    }
    //cout << endl;
    
 
    vector<int> before(num.begin(), num.begin() + n/2);
    if(n%2 == 0){
        vector<int> after(num.begin() + n/2, num.end());


    cout << mid(before) << endl;
    cout << mid(num) << endl; 
    cout << mid(after) << endl;
    }else{
        vector<int> after(num.begin() + n/2 + 1, num.end());


    cout << mid(before) << endl;
    cout << mid(num) << endl; 
    cout << mid(after) << endl;
    }
    
    
    
    
    return 0;
}



