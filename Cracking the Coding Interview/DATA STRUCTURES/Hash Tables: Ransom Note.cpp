//https://www.hackerrank.com/challenges/ctci-ransom-note
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
#include <map>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    
    //timeout since testcase 13
    /*for(vector<string>::iterator it = ransom.begin(); it != ransom.end(); it++){
        vector<string>::iterator findit = find(magazine.begin(), magazine.end(), *it);
        if(findit != magazine.end()){
            magazine.erase(findit);
        }else{
            return false;
        }
    }
    return true; */ 
    map<string, int> mage;
    for(vector<string>::iterator it = magazine.begin(); it != magazine.end(); it++){
        mage[*it] ++;
    }
    for(vector<string>::iterator it = ransom.begin(); it != ransom.end(); it++){
        map<string, int>::iterator findit = mage.find(*it);
        if(findit != mage.end()){
            if(mage[*it] == 1){
                mage.erase(*it);
            }else{
                mage[*it] --;
            }
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
