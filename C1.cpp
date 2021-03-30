#include <iostream>
#include <cstring>

using namespace std;

struct String {
    int n;
    char* str;// = new char [n];
    String (const char* s) {
        n = strlen(s);
        str = new char [n];
        strcpy(str,s);
    }
    ~String() {
        delete []str;
    }
    void print() const {
        cout << str << endl;
    }
    void append(const char* other) {
        int sz = n + strlen(other);
        char* tmp = new char [sz];
        strcpy(tmp,str);
        strcat(tmp,other);
        str = tmp;
    }
};


int main(int argc, char** agrv)
{
    String greeting("Hi");
    greeting.append(" there");
    greeting.print();
    return 0;
}
