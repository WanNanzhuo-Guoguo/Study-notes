#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nextGreaterElement(int n) {
        //整体思路是从右往左找下降点然后和已经找过的比较小的数调换
        string s=to_string(n);
        //相当于倒着走
        int i=s.size()-1;
        //如果没法找到就返回-1
        while(i>0&&s[i]<=s[i-1])
        {
            i--;
        }
        if(i==0){return -1;}
        //从右往左找第一个比s[i]大的数，前面没返回就说明i已经找到了，并且中止在s[i]>s[i-1],下降点对应的是i-1
        int j=s.size()-1;
        while(j>0&&s[j]<=s[i-1])
        {
            j--;
        }
        swap(s[i-1],s[j]);
        //把下降点右边的那一串数递减排序
        //但是前面我们找的时候其实已经是从小到大排的了，所以我们反转一下就好了
        reverse(s.begin()+i,s.end());
        //转成数字
        long long result=stoll(s);
        if(result>INT_MAX)
        {
            return -1;
        }
        return result;
    }
};