#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <hash_map>
#include <string>
using namespace std;

int main ()
{
  std::vector<int> a= {1,2,3,4,5,6};
  int x=5;
  a.erase(std::remove_if(a.begin(),a.end(),[x](int n){return x>n;}),a.end());
  for(auto it:a)
    std::cout<<it<<std::endl;

  auto fun = [a](int i){
      for(auto iter:a)
        std::cout<<iter+i<<" ";
      };
      fun(6);

  return 0;
}
