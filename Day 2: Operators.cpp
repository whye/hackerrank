//https://www.hackerrank.com/challenges/30-operators
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost;
    int tipPer;
    int taxPer;
    
    cin >> mealCost;
    cin >> tipPer;
    cin >> taxPer;
    
    cout << "The total meal cost is " << round(mealCost + mealCost*(tipPer + taxPer)/100.0) << " dollars." << endl;
    
    
    return 0;
}
