#include <iostream>
#include <iomanip>
#include <string>
#include <istream>
using namespace std;

void function(char *text1, char *text2)
{   
    try{
        cout << "Enter your text: ";
    cin >> text2;   //N validation on buffer size
    cin.ignore(1,'\n');               //a large amount of characters will cause a fatal error.
     
    }catch(int err){
        cout << err << endl;
    };
       
    cout << "Unvalidated Input: " << text2 << endl;

/***************************************************/

    cout << "Enter your text: ";
    //cin.get(); 
    cin.getline(text1, 10);
    cin.ignore(1,'\n');

    cout << "Validated output: " << text1 << endl;
}

int main()
{  
    // Bottom of the stack 
    char text1[10];
    char text2[10];
    function(text1,text2);   // New Validated buffer size

    return 0;
} 