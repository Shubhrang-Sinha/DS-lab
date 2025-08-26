#include <bits/stdc++.h>
#include <string>
using namespace std;

bool areAnagrams(string str1, string str2) {

    if (str1.length() != str2.length()){
         return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    
    if (str1 == str2) {
        return true;        
    }

    else{
        return false;
    }
    
}
    


int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (areAnagrams(str1, str2)){
        cout << "YES, they are anagrams." << endl;
    }
    else{
        cout << "NO, they are not anagrams." << endl;
    }

    return 0;
}
