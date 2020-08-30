//
// Created by SummerFlower on 23/08/2020.
//

#ifndef DESIGNPATTERN_STRINGPARSER_H
#define DESIGNPATTERN_STRINGPARSER_H

#include <optional>
#include <string>
#include <vector>

class StringParser
{
    StringParser() {}

    static std::vector<int> kmpTable(const std::string &s)
    {
        int len = s.length(), j = 0;
        std::vector<int> table(len, 0);

        for(int i = 1; i < len; i++) {
            while (j>0 && s[i] != s[j])
                j = table[j-1];
            if(s[i] == s[j])
                table[i] = ++j;
        }

        return table;
    }
public:
    static std::optional<std::string> contains(const std::string &pattern, const std::string& context)
    {
        std::vector<int> table = kmpTable(pattern);
        int patternLen = pattern.length(), contextLen = context.length(), j = 0;

        for(int i = 0; i < contextLen; ++i){
            while(j>0 && context[i] != pattern[j])
                j = table[j - 1];

            if(context[i] == pattern[j])
                if(j == patternLen - 1)
                    return context.substr(i + 1);
                else
                    j++;
        }
        return std::nullopt;
    }

    static int getValue(const std::string& context)
    {
        int ret = 0, len = context.length(), index = 0;
        while(context[index] == ' ')
            ++index;

        while(index < len && '0' <= context[index] && context[index] <= '9')
            ret = (ret << 3) + (ret << 1) + (context[index++] & 0b1111);

        return ret;
    }
};

#endif //DESIGNPATTERN_STRINGPARSER_H
