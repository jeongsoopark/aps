#include <iostream>

using namespace std;

int X[12];
int Y[12];
int length=0;
int nUnattackable = 0;
int maxLevel = 0;
int sizeBoard=0;
int nCase = 0;
unsigned int clearSign = ~(0x1<<31);


bool isUnattackableSet(int _X[], int _Y[], int Cx, int Cy)
{
    if(length == 0)
        return true;
    
    for(int i = length-1; i >= 0 ; i--) {
        if( !(_X[i] ^ Cx) ) {
            return false;
        } else if ( !(_Y[i] ^ Cy)) {
            return false;
        } else if ( abs(_X[i]-Cx) == abs(_Y[i]-Cy) ) {
            return false;
        }
    }
    return true;
}

void processLevel(int _level)
{
    
    //if level reaches to the end, succeeding case inc. unattackable
    if(_level == maxLevel+1)  {
        nUnattackable++;
        //pop and return
        length--;
        return;
    }
    
    for(int i = 0 ; i < sizeBoard ; i++) {
        if(isUnattackableSet(X, Y, i, _level) ) {
            X[_level] = i;
            Y[_level] = _level;
            length++;
            processLevel(_level+1);
        }
    }
    length--;
    return;
    
}

int main()
{
    cin >> nCase;
    while( nCase-- ){
        nUnattackable = 0;
        length = 0;
        cin >> sizeBoard ;
        if(sizeBoard > 12) return false;
        if(sizeBoard < 1) return false;
        maxLevel = sizeBoard-1;
        processLevel(0);
        cout << nUnattackable << endl;
    }
}