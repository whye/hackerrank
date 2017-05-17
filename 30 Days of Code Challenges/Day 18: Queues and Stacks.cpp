//https://www.hackerrank.com/challenges/30-queues-stacks

#include <iostream>
#include <string>

using namespace std;

class Solution {
    //Write your code here
    private:
        string stack;
        string queue;
    public:
        Solution(){
            stack = "";
            queue = "";
        }
        void pushCharacter(char ch){
            stack = (ch) + stack;
        }
        void enqueueCharacter (char ch){
            queue += (ch);
        }
        char popCharacter(){
            //pop the top of the stack
            char temp = stack[0];
            stack.erase(stack.begin());
            return temp;
        }
        char dequeueCharacter(){
            //pop the first character of the queue
            char temp = queue[0];
            queue.erase(queue.begin());
            return temp;
        }

};


int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
