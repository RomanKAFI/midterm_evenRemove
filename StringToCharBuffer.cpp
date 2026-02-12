#include <iostream> 
#include <string>
using namespace std;


void StringToCharBuffer(const string &inputString, char** outPtr )
{
    int length = inputString.length();

    *outPtr = new char[length + 1];

    char *writePtr = *outPtr;

    for (int i = 0; i < length; i++) {
        *writePtr = inputString[length - 1 - i]; 
        writePtr++;
    }

    *writePtr = '\0';
}



int main()
{
    char* p;

    string s = "!kcoR sredoC";
    StringToCharBuffer(s, &p);
    cout << p << endl;
    delete[] p;
    return 0;
}