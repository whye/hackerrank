//https://www.hackerrank.com/challenges/30-conditional-statements
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
using namespace std;


int main(){
    int N;
    cin >> N;
    
    if(N%2 == 1){
        cout << "Weird" << endl; 
    }else if(N%2 == 0 && 6 <= N && N <= 20){
        ///cout << N << endl;
        cout << "Weird" << endl;
    }else{
        cout << "Not Weird" << endl;
    }
    return 0;
}
