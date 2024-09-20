// CPP program for the above approach
#include <bits/stdc++.h>
/*

l1: Top Left coordinate of first rectangle. 
r1: Bottom Right coordinate of first rectangle. 
l2: Top Left coordinate of second rectangle. 
r2: Bottom Right coordinate of second rectangl

// Here l1 comapares with r2 , l2 comapares with r1
*/

struct Point {
    int x, y;
};

// Returns true if two rectangles (l1, r1) and (l2, r2)
// overlap

// Here l1 comapares with r2 , l2 comapares with r1
bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
   if (l1.x > r2.x || l2.x > r1.x)
        return false;

    // If one rectangle is above the other
    if (r1.y > l2.y || r2.y > l1.y)
        return false;

    return true;
}

/* Driver program to test above function */
int main()
{
    Point l1 = { 0, 10 }, r1 = { 10, 0 };
    Point l2 = { 5, 5 }, r2 = { 15, 0 };
    if (doOverlap(l1, r1, l2, r2))
        printf("Rectangles Overlap");
    else
        printf("Rectangles Don't Overlap");
    return 0;
}
