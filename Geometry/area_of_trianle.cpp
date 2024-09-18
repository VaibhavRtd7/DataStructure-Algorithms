#include <iostream>

// Find the area of a triangle with the vertices: A(3,4), B(4,7), and C(6,−3).
// (x1, y1) , (x2, y2), (x3, y3)
// Area = (1/2) |x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)|.

using namespace std;

void findAreaOfTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    
    int y12=y1-y2;
    int y23=y2-y3;
    int y31=y3-y1;
    
    int area = abs(x1*(y23) + x2*(y31) + x3*(y12))/2;
    cout << area << endl;
    
}

int main()
{
    
    int x1=3, y1=4,
        x2=4, y2=7,
        x3=6, y3=-3;
    
    findAreaOfTriangle(x1, y1, x2, y2, x3, y3);

    return 0;
}
