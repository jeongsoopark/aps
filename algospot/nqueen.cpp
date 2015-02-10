#include <iostream>
#include <string>
#include <vector>
#include <complex>
#include <map>
using namespace std;

map<int, bool> canSeeTable;
typedef struct {

  unsigned int x;
  unsigned int y;
} position;

inline unsigned int mapIndex( const position& A, const position& B)
{
  return ( (A.x & 0xF) << 12) | ( (A.y & 0xF) << 8 ) | ( (B.x & 0xF) << 4 ) |  (B.y & 0xF); 
}

bool canSee( const position& A, const position& B)
{
  if(A.x == B.x || A.y == B.y) return true;
  else if( abs( A.x-B.x) == abs(A.y-B.y) ) return true;
  return false;
}

int main()
{
    int nTestCase = 0;
    cin >> nTestCase;

    while( nTestCase-- ){
      unsigned int boardSize = 0;
      cin >> boardSize;
    }
}


