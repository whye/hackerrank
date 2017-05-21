//https://www.hackerrank.com/challenges/30-nested-logic

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int day_a, month_a, year_a;
    int day_e, month_e, year_e;
    
    cin >> day_a >> month_a >> year_a >> day_e >> month_e >> year_e;
    
    int fine;
    
    if(year_a - year_e > 0) cout << "10000" << endl;
    else if(month_a - month_e > 0 && year_a == year_e){
        int day = month_a - month_e; 
        cout << 500 * (day) << endl;
    }else if(day_a - day_e > 0 && month_a == month_e && year_a == year_e){
        cout << 15 * (day_a - day_e) << endl;
    }else{
        cout << "0" << endl;
    }
    
    
    return 0;
}
