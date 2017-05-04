//https://www.hackerrank.com/challenges/ctci-lonely-integer
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

/*int lonely_integer(vector <int> a) {
    
    vector<bool> flag_v(a.size());
    for(int i = 0; i < a.size(); i++){ flag_v[i] = false; }
    for(int i = 0; i < a.size(); i++){
        bool flag = false;
        if(flag_v[i] == false){
            for(int j = i + 1; j < a.size(); j++){
                if(a[i] == a[j]){
                    flag_v[j] = true;
                    flag = true;
                    }
            }
            if(flag == false) return a[i];
        }
        
    }
    
    return a[0];
}*/

int lonely_integer(vector <int> a) {

    for(int i = 0; i < a.size(); i++){
        bool flag = false;
        for(int j = i + 1; j < a.size(); j++){
            if(a[i] == a[j]){
                a.erase(a.begin() + j);
                flag = true;
            }
        }
                  
        if(flag == false) return a[i];
    }
    
    return a[0];
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    cout << lonely_integer(a) << endl;
    return 0;
}
