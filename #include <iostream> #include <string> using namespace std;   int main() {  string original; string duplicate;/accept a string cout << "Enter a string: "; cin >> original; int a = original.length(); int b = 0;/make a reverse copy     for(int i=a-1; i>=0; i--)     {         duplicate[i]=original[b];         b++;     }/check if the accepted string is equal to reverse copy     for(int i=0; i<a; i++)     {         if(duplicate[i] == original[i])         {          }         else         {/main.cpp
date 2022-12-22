#include <iostream>
#include <string>
using namespace std;


int main()
{

string original;
string duplicate;

//accept a string
cout << "Enter a string: ";
cin >> original;
int a = original.length();
int b = 0;


    //make a reverse copy
    for(int i=a-1; i>=0; i--)
    {
        duplicate[i]=original[b];
        b++;
    }

    //check if the accepted string is equal to reverse copy
    for(int i=0; i<a; i++)
    {
        if(duplicate[i] == original[i])
        {

        }
        else
        {
            //if not, display string is not palindrome and return
            cout << endl << "The String is NOT PALINDROME" << endl;
            return 0;
        }
    }

    //else display strinf is palindrome
    cout << endl << "The String is PALINDROME" << endl;

}
