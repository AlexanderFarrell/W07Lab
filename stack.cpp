#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string function()
{   
    //third item on the stack
    char text1[10];
    for(int i=0; i < 10; i++)
    {
        // Seed character array with integer values
       text1[i] = i;
       cout << text1[i] << endl;
    }

    // Fourth Item on the stack
    char text2[10];
    cout << "Enter the thing: ";
   
    cin >> text2;  //No validation on buffer size

    //cout << text1[1] << endl;
    return text2;

}

int main()
{  
    //Top of the stack 
    string output = "";

    //value returned from function stored for output 
    output = function();

    cout << output << endl;

    return 0;
}