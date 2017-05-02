//https://www.hackerrank.com/challenges/30-dictionaries-and-maps
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    
    map<string, int> phoneBook;
    string key = "";
    int value = 0;
    for(int i = 0; i < n; i ++){
        cin >> key;
        cin >> value;
        phoneBook[key] = value;
    }
    
    while(cin >> key){
        if(phoneBook.find(key) != phoneBook.end()){
            cout << key << "=" <<phoneBook[key] << endl;
        }else{
            cout << "Not found" << endl;
        }
    }
    return 0;
}
