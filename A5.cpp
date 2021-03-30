#include <iostream>
#include <cstring>

using namespace std;

struct String {
    int n;
    char* str;
    String (const char s[]) {
        n = strlen(s);
        str = new char [n];
        strcpy(str,s);
	cout << &s << endl;
    }
    ~String() {
        delete []str;
    }
    void print() const {
        cout << str << endl;
    }
};


int main(int argc, char** agrv)
{
    String greeting("Hi");
    cout << &(greeting.str) << endl;
    greeting.print();
    return 0;
}
