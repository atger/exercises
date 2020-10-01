#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main(int argc, char** argv)
{
  std::vector<int> v;
  for(int i = 1; i <= 100; ++i)
  {
    if(i % 3 == 0 || i % 5 == 0)
      v.push_back(i);
  }
  std::cout << std::accumulate(v.begin(),v.end(),0) << std::endl;
}
