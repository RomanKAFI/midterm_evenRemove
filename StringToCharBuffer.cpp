int main()
{
    char* p;

    string s = "!kcoR sredoC";
    StringToCharBuffer(s, &p);
    cout << p << endl;
    delete[] p;
    return 0;
}