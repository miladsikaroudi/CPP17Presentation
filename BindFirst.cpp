// Type your code here, or load an example.
#include<memory>
#include<algorithm>
#include<array>

int do_something(int i, int j)
{
  return i+j;
}

int main()
{
  const auto f=std::bind1st(std::function<int (int, int)>(&do_something), 1);
  return f(3);
}