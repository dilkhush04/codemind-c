#include <bits/stdc++.h>
using namespace std;
int Balloons(string text) {
        vector<int> counts(26, 0);
        for (char c : text) {
            counts[c - 'a']++;
        }
        
        int res = 999;
        string b = "ban";
        string l = "lo";
        for (char c : b) {
            res = min(res, counts[c - 'a']);
        }
        for (char c : l) {
            res = min(res, counts[c - 'a'] / 2);
        }
        
        return res == 999 ? 0 : res;
    }
int main()
{
    char s[100];
    scanf("%s",s);
    printf("%d",Balloons(s));
}