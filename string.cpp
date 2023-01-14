#include <bits/stdc++.h>
using namespace std;
#define ll long long
class String
{
    string source;
    unordered_map<char, string> mpupper = {
        {'a', "A"},
        {'b', "B"},
        {'c', "C"},
        {'d', "D"},
        {'e', "E"},
        {'f', "F"},
        {'g', "G"},
        {'h', "H"},
        {'i', "I"},
        {'j', "J"},
        {'k', "K"},
        {'l', "L"},
        {'m', "M"},
        {'n', "N"},
        {'o', "O"},
        {'p', "P"},
        {'q', "Q"},
        {'r', "R"},
        {'s', "S"},
        {'t', "T"},
        {'u', "U"},
        {'v', "V"},
        {'w', "W"},
        {'x', "X"},
        {'y', "Y"},
        {'z', "Z"},
    };
    unordered_map<char, string> mplower = {
        {'A', "a"},
        {'B', "b"},
        {'C', "c"},
        {'D', "d"},
        {'E', "e"},
        {'F', "f"},
        {'G', "g"},
        {'H', "h"},
        {'I', "i"},
        {'J', "j"},
        {'K', "k"},
        {'L', "l"},
        {'M', "m"},
        {'N', "n"},
        {'O', "o"},
        {'P', "p"},
        {'Q', "q"},
        {'R', "r"},
        {'S', "s"},
        {'T', "t"},
        {'U', "u"},
        {'V', "v"},
        {'W', "w"},
        {'X', "x"},
        {'Y', "y"},
        {'Z', "z"},

    };

public:
    String(string str)
    {
        source = str;
    }

    static string getString(String str)
    {
        return str.source;
    }

    int length()
    {
        return source.size();
    }

    string getString()
    {
        return source;
    }

    char charAt(int idx)
    {
        if (idx < source.size())
            return (source[idx]);
        else
            throw runtime_error("idx out of bound!");
    }

    int compareTo(string cmp)
    {
        char s1[source.size()];
        char s2[cmp.size()];
        for (int i = 0; i < source.size(); i++)
        {
            s1[i] = source[i];
        }
        for (int i = 0; i < cmp.size(); i++)
        {
            s2[i] = cmp[i];
        }
        return strcmp(s1, s2);
    }
    int compareTo(String CMP)
    {
        string cmp = CMP.getString();
        char s1[source.size()];
        char s2[cmp.size()];
        for (int i = 0; i < source.size(); i++)
        {
            s1[i] = source[i];
        }
        for (int i = 0; i < cmp.size(); i++)
        {
            s2[i] = cmp[i];
        }
        return strcmp(s1, s2);
    }
    int compareToIgnoreCase(string cmp)
    {
        char s1[source.size()];
        char s2[cmp.size()];
        for (int i = 0; i < source.size(); i++)
        {
            s1[i] = tolower(source[i]);
        }
        for (int i = 0; i < cmp.size(); i++)
        {
            s2[i] = tolower(cmp[i]);
        }
        return strcmp(s1, s2);
    }
    int compareToIgnoreCase(String CMP)
    {
        string cmp = CMP.getString();
        char s1[source.size()];
        char s2[cmp.size()];
        for (int i = 0; i < source.size(); i++)
        {
            s1[i] = tolower(source[i]);
        }
        for (int i = 0; i < cmp.size(); i++)
        {
            s2[i] = tolower(cmp[i]);
        }
        return strcmp(s1, s2);
    }
    String concat(string s2)
    {
        string con = source + s2;
        return String(con);
    }
    String concat(String s2)
    {
        string con = source + s2.getString();
        return String(con);
    }

    bool contains(string s)
    {
        if (s.size() > source.size())
        {
            return false;
        }
        if (source.find(s) != string::npos)
            return true;
        return false;
    }
    bool contains(String S)
    {
        string s = S.getString();
        if (s.size() > source.size())
        {
            return false;
        }
        if (source.find(s) != string::npos)
            return true;
        return false;
    }

    void toUpperCase()
    {

        string temp = "";
        for (int i = 0; i < source.size(); i++)
        {
            if (mpupper.find(source[i]) != mpupper.end())
            {
                temp = temp + mpupper[(source[i])];
            }
            else
            {
                temp = temp + source[i];
            }
        }
        source = temp;
    }
    void toLowerCase()
    {

        string temp = "";
        for (int i = 0; i < source.size(); i++)
        {
            if (mplower.find(source[i]) != mplower.end())
            {
                temp = temp + mplower[(source[i])];
            }
            else
            {
                temp = temp + source[i];
            }
        }
        source = temp;
    }
};
int main()
{
    String s = String("hello");
    String s2 = String("smil");
    cout << s.charAt(10);
}