#include <vector>

#include <iostream>

using namespace std;

int
main ()
{

vector < int >v1 (10, -1);

vector < int >v2; 

v2.reserve (10);

  for (unsigned i = 0; i < 10; i++)

    {

    v2.push_back (i);

    }
  cout << v2[0] << ", " << v1[0];

  return 0;

}