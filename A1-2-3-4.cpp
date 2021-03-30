#include <iostream>

using namespace std;

struct Point {
    double x, y;
    Point() {}
    Point(double _x, double _y) {
        x = _x;
        y = _y;
    }
    void print() {
        cout << '(' << x << ',' << y << ')' << endl;
    }
    ~Point() {}
};

void testVal(Point A) {
    cout << &A << endl;
}
void testRef(Point &A) {
    cout << &A << endl;
}

Point midpoint(const Point A, const Point B) {
    Point M;
    M.x = (A.x + B.x)/2;
    M.y = (A.y + B.y)/2;
    return M;
}

int main()
{
    Point A(1,3), B(2,6);
    A.print();
    testVal(A);
    testRef(A);
    cout << &A << endl << &A.x << endl << &A.y << endl;
    Point M = midpoint(A,B);
    M.print();
    return 0;
}

//A4: Nhận xét: Các trường trong struct được lưu trong các ô nhớ liền kề
//              trong đó, địa chỉ của trường đầu tiên cũng là địa chỉ của biến
