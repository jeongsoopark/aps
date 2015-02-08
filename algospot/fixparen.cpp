#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

class openparen {
  public:
  openparen() {};
  ~openparen() {};
  openparen(char& _ch, int _pos) : letter(_ch), pos(_pos) {};
  char letter;
  int pos;
};

char getOpposed(char _ch) 
{
  if( _ch == '(' ) return ')';
  else if( _ch == ')' ) return '(';
  else if( _ch == '{' ) return '}';
  else if( _ch == '}' ) return '{';
  else if( _ch == '<' ) return '>';
  else if( _ch == '>' ) return '<';
  else if( _ch == '[' ) return ']';
  else if( _ch == ']' ) return '[';
  else return 0;
}

bool isOpen(const char& ch)
{
  if( ch == '(' || ch == '{' || ch == '<' || ch == '[') return true;
  else return false;
}

int compare(const char& A, const char& B, vector<char> vec)
{
  int nA = 0;
  int nB = 0;
  
  for(vector<char>::iterator it = vec.begin() ; it != vec.end() ; it++){
    if(*it == A)
      nA = it-vec.begin();
    else if(*it == B)
      nB = it-vec.begin();
    else 
      nA = nB = 0;
  }
   //negavie if nA is higher than nB
  return (nA - nB);
}

int main()
{
  int nTestCase = 0;
  vector<char> priority;
  vector<char> fixed;
  priority.resize(4);
  string inStr;
  char input;
  vector<openparen> opened;
  cin >> nTestCase;

  int pos = 0;
  while( nTestCase-- ){
    fixed.clear();
    cin >>inStr >> priority[0] >> priority[1] >>priority[2] >> priority[3];
    fixed.resize(inStr.size() );
    istringstream iss(inStr);
    iss >> input;
    if(isOpen(input) ){
      opened.push_back(openparen(input, pos++) );
    } else {
      //closing parenthesis
      openparen openedparen = opened.back();
      char opench = openedparen.letter;
      char openpos= openedparen.pos;
    }
     
     
     
     
    opened.clear();
  }
}
