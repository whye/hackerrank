//https://www.hackerrank.com/challenges/30-bitwise-and

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

int bitope(int n, int k){
    
    int re = INT_MIN;
    for(int i = 1; i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            //cout << i << " " << j << " " << (i&j) << endl;
            int temp = i&j;
            if(temp < k && temp > re)
                re = temp;
        }
    }
    return re;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        cout << bitope(n, k) << endl;
    }
    return 0;
}
