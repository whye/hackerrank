//https://www.hackerrank.com/challenges/ctci-making-anagrams
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

int number_needed(string a, string b) {
    map<char, int> a_map;
    map<char, int> b_map;
    
    int num = 0;
    
    for(string::iterator it = a.begin(); it != a.end(); it++){
        a_map[*it]++;
    }
    for(string::iterator it = b.begin(); it != b.end(); it++){
        b_map[*it]++;
    }
    for(map<char,int>::iterator it = a_map.begin(); it != a_map.end(); it++){
        if(b_map.find(it->first) != b_map.end()){
            num += abs(it->second - b_map[it->first]);
            b_map.erase(it->first);
        }else{
            num += it->second;
        }
    }
    //cout << num << endl;
    for(map<char,int>::iterator it = b_map.begin(); it != b_map.end(); it++){
        num += it->second;
    }
    return num;
}

int main(){
    string a;
    cin >> a;    
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
