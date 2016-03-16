/*
    Main Source File
    Project: SplitString
    Author:  Matthew Boyette
    Date:    2/27/2016
*/

#include "main.h"

int main(int argc, char *argv[])
{
    string myString = "This Is A String";
    vector<string> stringParts = StringSplitter::splitString(myString, ' ');

    cout << myString << endl;

    for (string part : stringParts)
    {
        cout << part << endl;
    }

    // Exit the program successfully.
    return EXIT_SUCCESS;
}