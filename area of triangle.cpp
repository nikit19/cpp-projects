//program to find area of any given triangle

#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()

{
	float side, area;
	std::cout << "Enter the side of the triangle: ";
    std::cin >> side;

    area = (sqrt(3)/4) * pow(side, 2);

    std::cout << "Area of the given triangle is: " << area <<std::endl;

    return 0;

}
