#include <iostream>
#include <limits>

int getDataTypes(void)
{
  std::cout << "Grenzen mit sizeof(): \n\n";

  std::cout << "size value for int: " << sizeof(int) << '\n';
  std::cout << "size value for u_int: " <<sizeof(unsigned int)<< '\n';  
  std::cout << "size value for double: " << sizeof(double) << '\n';
  std::cout << "size value for u_short: " << sizeof(unsigned short) << '\n';
  std::cout << "size value for bool: " << sizeof(bool) << '\n';
	
	std::cout << "\n\n Grenzen mit <limits>: \n\n";

  std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << '\n';
  std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << '\n';
  
  std::cout << "Minimum value for u_int: " << std::numeric_limits<unsigned int>::min() << '\n';
  std::cout << "Maximum value for u_int: " << std::numeric_limits<unsigned int>::max() << '\n';
  
  std::cout << "Minimum value for double: " << std::numeric_limits<double>::min() << '\n';
  std::cout << "Maximum value for double: " << std::numeric_limits<double>::max() << '\n';
  
    std::cout << "Minimum value for u_short: " << std::numeric_limits<unsigned short>::min() << '\n';
  std::cout << "Maximum value for u_short: " << std::numeric_limits<unsigned short>::max() << '\n';
  
    std::cout << "Minimum value for bool: " << std::numeric_limits<bool>::min() << '\n';
  std::cout << "Maximum value for bool: " << std::numeric_limits<bool>::max() << '\n';
  
  return 0;

}