#include<bits/stdc++.h>
using namespace std;
string gcdOfStrings(string str1, string str2) {
         int n=__gcd(str1.length(),str2.length());
        if(str1+str2==str2+str1)
        {
            int n=__gcd(str1.length(),str2.length());
            return (str1.substr(0,n));

        }
        return "";

    }
    int main(){
        string s1,s2;
        cin>>s1>>s2;
        cout<<gcdOfStrings(s1,s2);
    }
