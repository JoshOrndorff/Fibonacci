#include <iostream>
#include <ncurses.h>
using namespace std;


int nextNumber (int prev1, int prev2);

int main ()
{
  int start1 = 1;
  int start2 = 2;

  cout << "Generating the Fibonacci Series starting with" << start1 << " and " << start2 << ".\n";
  cout << start1 << endl;
  cout << start2 << endl;

  nextNumber(start1, start2);

  return 0;
}

int nextNumber (int prev1, int prev2)
{
  int next = prev1 + prev2;

  if(next < 0){
    cout << "Really?  You need this many Fibonacci's?  We just overflowed the int type!\n\n\n";
  } else {
    cout << next << "   Press enter to generate another... ";
    cin.get();
    nextNumber (prev2, next);
  }
  return 0;
}
