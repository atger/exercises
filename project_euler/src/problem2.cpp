#include <iostream>
#include <vector>
#include <numeric>

int main(int argc, char** argv)
{
  long int i = 1, j = 1, s = 1;
  std::vector<int> v;
  while( s < 4000000)
  {
    v.push_back(s);
    s = i + j;
    i = j;
    j = s;
  }
  std::cout << std::accumulate(v.begin(),v.end(),0) << std::endl;
}
