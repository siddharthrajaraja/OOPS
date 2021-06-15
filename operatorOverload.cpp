/*
    The basic task of this is to overload + operator to
    concatenate two strings.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public :
    string s1,s2;
    Solution(string a,string b){
        this->s1=a;
        this->s2=b;
    }

    string operator+(Solution &obj2){
        string first=this->s1+' '+this->s2;
        string second=' '+obj2.s1+' '+obj2.s2;
        return first+second;
    }

};


int main(){
    Solution obj1("My","Name");
    Solution obj2("Siddharth","Raja");
    cout<<obj1+obj2;
    return 0;
}