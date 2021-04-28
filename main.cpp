//Count number of bits to be fliped to convert 
// number A to number B
#include <iostream>
using namespace std;

int countsetbits(int n)
{
  int count =0;
  while(n>0)
  {
    count++;
    n &=(n-1);
  } 
  return count;
}

int 
int main() {

}