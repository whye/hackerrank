//https://www.hackerrank.com/challenges/30-binary-numbers

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


int main(){
    int n;
    cin >> n;
    
    int maxcon = 0;
    int temp = 0;
    while(n != 0){
        //cout << n%2 << " ";
        if(n%2 == 1 ){       
            temp ++;
        }else{
            temp = 0;
        }
         
        if(temp > maxcon){
            maxcon = temp;
        }
        n = n/2;
    }
    
    
    cout << maxcon << endl;
    
    return 0;
}
