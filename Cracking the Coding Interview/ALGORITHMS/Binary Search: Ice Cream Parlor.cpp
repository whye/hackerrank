//https://www.hackerrank.com/challenges/ctci-ice-cream-parlor

#include <bits/stdc++.h>
using namespace std;

class IceCream {
    
    public: 
        int flavor; 
        int index;

        IceCream(int f, int i) {
            flavor = f;
            index = i;
            
       }
};
    
int binarySearch(int first, int last, vector<IceCream> arr, int search) {
    if(first > last) return -1;
    int mid = (first + last)/2;
    if(arr[first].flavor == search) return arr[first].index;
    else if(arr[last].flavor == search) return arr[last].index;
    else if(arr[mid].flavor == search) return arr[mid].index;
    else if(arr[mid].flavor < search) return binarySearch(mid + 1, last, arr, search);
    else if(arr[mid].flavor > search) return binarySearch(first, mid - 1, arr, search);
    else return -1;
}

bool compare(IceCream a, IceCream b){
    return a.flavor < b.flavor;
}

int main() {
    int t;
    int n, m;
    cin >> t;
    for(int test = 0; test < t; test++) {       
        cin >> m >> n;
        vector<IceCream> arr;
        arr.reserve(n); 

        for (int i = 0; i < n; i++) {
            int cost;
            cin >> cost;
            arr.push_back(IceCream(cost, i + 1));
        }

        sort(arr.begin(), arr.end(), compare);
       /* for(int i = 0; i < n; i ++){
            cout << arr[i].flavor << endl;
        }
        int firstIndex = 100000, secondIndex = 100000;
        for(int i = 0; i < n; i ++){
            cout << arr[i].flavor << " ";
        }
        cout << endl;
        for(int i = 0; i < n; i ++){
            cout << arr[i].index << " ";
        }
        cout << endl;
        */
        
        for(int i = 0; i < n - 1 ; i++) {
            int search = m - arr[i].flavor;
            if(search >= arr[i].flavor) {
                //cout << arr[i].flavor << " search " << search << endl;
                int index = binarySearch( i + 1, n - 1, arr, search);
                //cout << index << endl;
                if( index != -1 ) {
                    //cout << "test" << test << endl;
                    cout << min(arr[i].index, index) << " " << max(arr[i].index, index) << endl;
                    break;

                }
            }
        }

    }

}

