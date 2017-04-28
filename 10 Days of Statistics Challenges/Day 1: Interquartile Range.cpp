//https://www.hackerrank.com/challenges/s10-interquartile-range
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

float mid(vector<int> num){
    //cout << "size is:" << num.size() << endl;
    if(num.size()%2 == 1){
        return (float)num[num.size()/2.0];
    }else{
        return ((float)num[num.size()/2]+(float)num[num.size()/2-1])/2.0;
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    vector<int> upper(n);
    vector<int> lower(n);
    
    for(int i = 0; i < n; i++){
        cin >> upper[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> lower[i];
        sum += lower[i];
    }
    vector<int> num(sum);
    int index = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < lower[i]; j++){
            num[index] = upper[i];
            index++;
        }            
    }

    sort(num.begin(), num.end());
    for(int i = 0; i < sum; i++){
        //cout << num[i] << ' ';
    }
    //cout << endl;
    
    if(sum%2 == 1){
        vector<int> u2(num.begin(), num.begin() + sum/2);
        vector<int> l2(num.begin() + sum/2 + 1, num.end());

        float midu = mid(u2);
        float midl = mid(l2);

        cout << fixed;
        cout << setprecision(1);
        //cout << midu << endl;
        //cout << midl << endl;
        cout << midl - midu << endl;
    }else{
        vector<int> u2(num.begin(), num.begin() + sum/2);
        vector<int> l2(num.begin() + sum/2, num.end());

        float midu = mid(u2);
        float midl = mid(l2);

        cout << fixed;
        cout << setprecision(1);
        //cout << midu << endl;
        //cout << midl << endl;
        cout << midl - midu << endl;
    }
    
    return 0;
}
