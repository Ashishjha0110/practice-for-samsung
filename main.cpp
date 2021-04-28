//Count number of bits to be fliped to convert 
// number A to number B
#include <iostream>
using namespace std;

// function to count set bits
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

//function to return the count of flipped number
int flipped_number(int a,int b)
{
  return countsetbits(a^b);
}

int main()
{
int x;
int y;
scanf("%d",&x);
scanf("%d",&y);
cout<<flipped_number(x,y)<<endl;
return 0;
}