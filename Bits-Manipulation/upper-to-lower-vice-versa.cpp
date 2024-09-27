#include <iostream>
using namespace std;

int main()


    string str="VaIbhAv";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 97 && str[i]<=122) {
            str[i] -= 32;
        }
    }
    cout << str << endl;  // VAIBHAV


// -------------------------------------------------------------------
// {
//     char ch_A=65;  
//         // ch_A += 32;  // Convert to lowercase
//     char ch_Z=90;
    
//     char ch_a=97; 
//         //  ch_a -= 32; //   // Convert to uppercase
//     char ch_z=122;
    
//     cout<<ch_a<<endl;

    return 0;
}
