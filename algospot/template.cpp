#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int nTestCase = 0;
    string inStr;
    char input;
    vector<char> opened;
    bool yesorno =true;



    cin >> nTestCase;
    if(nTestCase > 100) return false;
    if(nTestCase < 0) return false;

    while( nTestCase-- ){
        cin >>inStr;
        int i = inStr.length();
        int j = 0;
        while( j < i ) {
            input = inStr.at(j);
            if(     input == '(' ||
                    input == '{' ||
                    input == '[' ) {

                opened.push_back(input);
            }


            else if(  input == ')'  && opened.back() == '(' ) {
                opened.pop_back();
                yesorno = true;
            } else if ( input == '}' && opened.back() == '{' ) {
                opened.pop_back();
                yesorno = true;
            } else if ( input == ']' && opened.back() == '[' ) {
                opened.pop_back();
                yesorno = true;
            } else {
                yesorno = false;
                break;
            }
            j++;
        }
        if(!opened.empty() )
            yesorno = false;
        string msg = yesorno ? "YES" : "NO";

        cout << msg << endl;
        opened.clear();
    }
}


