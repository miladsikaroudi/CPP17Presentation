// Type your code here, or load an example.
#include<memory>
#include<algorithm>
#include<array>

int do_something(int i, int j)
{
  return i+2*j;
}
using namespace std::placeholders;
int main()
{
  const auto f=std::bind(&do_something, 1,_1);
  const auto g=[](int i){return do_something(1,i);};
  return f(3);
  return g(4);
}