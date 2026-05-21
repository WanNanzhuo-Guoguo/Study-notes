#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <map>
using namespace std;


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        //拆成一个一个单词
        stringstream ss(s);
        vector<string> words;
        string temp;
        while(ss>>s){words.push_back(s);}
        //判断字符串长度是否等于单词个数
        if(pattern.size()!=words.size())
        {
            return false;
        }
        //利用map保证：字母→单词对应、以及单词→字母对应
        map<char,string>mp1;//字母和单词对应
        map<string,char>mp2;//单词和字母对应
        //把对应的单词和字母加进map里
        for(int i=0;i<words.size();i++)
        {
            char c=pattern[i];
            string w=words[i];
            //检查有没有冲突再放:mp.count(key)如果返回1就说明存在，返回0说明不存在
            if(mp1.count(c)&&mp1[c]!=w){return false;}
            if(mp2.count(w)&&mp2[w]!=c){return false;}
            //把新的一对字母和单词加进去
            mp1[c]=w;
            mp2[w]=c;
        }
        return true;
    }
};