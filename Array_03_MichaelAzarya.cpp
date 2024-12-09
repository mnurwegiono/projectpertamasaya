#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int Array[5] = {1, 2, 3, 4, 5};

  reverse(begin(Array), end(Array));

  for(auto item:Array)
  {
    cout << item << " ";
  }
}