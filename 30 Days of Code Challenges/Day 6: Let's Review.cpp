//https://www.hackerrank.com/challenges/30-review-loop
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
    vector<string> str(n);
    
    for(int i = 0; i < n; i++){
        cin >> str[i];
        string odd = "";
        string even = "";
        for(int j = 0; j < str[i].size(); j++){
            if(j%2 == 0){
                even += str[i][j];
            }else{
                odd += str[i][j];
            }
        }
        cout << even << " " << odd << endl;
    }
    
    return 0;
}
