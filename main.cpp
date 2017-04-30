#include <iostream>

// C++11
void f() noexcept 
{
  std::cout << "Hello world\n";
}

int main() 
{
  std::cout << f() << '\n';
}
