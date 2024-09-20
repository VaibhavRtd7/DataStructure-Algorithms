/******************************************************************************
   
   Slope of line formed by 
   two points (y2, y1), (x2, x1)

Slope of Line = y2 - y1
               ---------
                x2 - x1
*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

bool isStraightLinePossible(vector< pair<int, int>>arr, int n) {
    
    int x0=arr[0].first;
    int y0=arr[0].second;
    
    int x1=arr[1].first;
    int y1=arr[1].second;
    
    int dx=x1-x0;
    int dy=y1-y0;
    
    // (x-x1)/(y-y1) == (dy/dx)  --> Here we checks for all values of (x,y) if it trues for all then its straight line
    
    for (int i=0; i<n; i++) {
        
        int x=arr[i].first;
        int y=arr[i].second;
        
        if(dx*(x-x1) != dy*(y-y1)) {
            // not a straight line
            return false;
        }
    }
    
    return true;
}

int main()
{

    int n=4;
    vector< pair<int, int>> arr = {
        {0, 0}, {1, 1}, {3, 3}, {2, 2}
    };
    
    bool ans = isStraightLinePossible(arr, n);
    if(ans) {
        cout << "Straight line !"<<endl;
    } else {
        cout << "Not a Straight line !"<<endl;
    }
       
    return 0;
}
