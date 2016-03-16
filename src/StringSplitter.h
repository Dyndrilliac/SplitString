/*
    StringSplitter Class Header File
    Project: SplitString
    Author:  Matthew Boyette
    Date:    2/27/2016
*/

#pragma once

#include <sstream>
#include <string>
#include <vector>

using namespace std;

class StringSplitter
{
    public:

        static const vector<string> splitString(const string &s, char delim, bool ignoreEmptyStrings = true);

    protected:

        // ...

    private:

        // ...

};