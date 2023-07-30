/*To check given two strings are anagram */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool checkAnagram(string str1, string str2)
{
    if(str1.length() != str2.length())
        return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    for(int i=0; i<str1.length(); i++)
    {
        if(str1[i] != str2[i])
            return false;
    }
    return true;
}

int main()
{
    string str1, str2;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    if(checkAnagram(str1, str2))
        cout<<"Strings are anagram";
    else
        cout<<"Strings are not anagram";
    return 0;
}
