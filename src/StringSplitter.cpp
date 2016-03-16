/*
    StringSplitter Class Source File
    Project: SplitString
    Author:  Matthew Boyette
    Date:    2/27/2016
*/

#include "StringSplitter.h"

const vector<string> StringSplitter::splitString(const string &s, char delim, bool ignoreEmptyStrings)
{
    stringstream ss(s);
    vector<string> elems;
    string item = "";

    while (getline(ss, item, delim))
    {
        if (ignoreEmptyStrings)
        {
            // Ignore empty strings.
            if (!item.empty())
            {
                elems.push_back(item);
            }
        }
        else
        {
            elems.push_back(item);
        }
    }

    return elems;
}