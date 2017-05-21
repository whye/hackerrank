//https://www.hackerrank.com/challenges/ctci-recursive-staircase

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

map<int, int> what;

int stairnum(int n){
    
 /*   if(n == 0) return 0;
    else if(n == 1) return 1;
    else if(n == 2) return stairnum(n - 1) + stairnum(n - 2) + 1;
    else if(n == 3) return stairnum(n - 1) + stairnum(n - 2) + 1;
    else return stairnum(n - 1) + stairnum(n - 2) + stairnum(n - 3);*/
    
    if(what.find(n) != what.end())
        return what[n];
    
    if(n == 0){
        what[n] = 0;
        return what[n];
    }else if(n == 1){
        what[n] = 1;
        return what[n];
    }else if(n == 2){
        what[n] = 2;
        return what[n];
    }else if(n == 3){
        what[n] = 4;
        return what[n];
    }else{
        what[n] = stairnum(n - 1) + stairnum(n - 2) + stairnum(n - 3);
        return what[n];
    }
    
 }

int main(){
    int s;
    cin >> s;
    for(int a0 = 0; a0 < s; a0++){
        int n;
        cin >> n;

        cout << stairnum(n) << endl;
    }
    return 0;
}
