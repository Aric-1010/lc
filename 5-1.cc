//#########################################################################
// Author: wangsuocheng
// Created Time: 2019-08-20 16:34:50
// File Name: 136.cc
// Description: 
//#########################################################################

#include <iostream>
#include <string>

using namespace std;

string longestPalindrome(string s){
    if(s.empty())
        return "";
    int length = s.size();
    if (length == 1) return s;
    int min_start=0;
    int max_len=1;
    cout<< "123";
    for (int i=0; i<length;) {
        if (length-i <= max_len/2)
            break;
        int k = i;
        int j = i;
        while (k<length-1 && s[k]==s[k+1])
            k++;
        i = k+1;
        while (k<length-1 &&j>0&&s[k+1]==s[j-1]){
            k++;
            j--;
        }
        int new_len = k-j+1;
        if (new_len > max_len){
            min_start = j;
            max_len = new_len;
        }
    }
    cout<< "155";
    cout<<min_start<<endl;
    cout<<max_len<<endl;
    return s.substr(min_start, max_len);
}

int main(){
    string s = "babad";
    string ret = longestPalindrome(s);
    cout<< ret;
    cout<<"111";
}
