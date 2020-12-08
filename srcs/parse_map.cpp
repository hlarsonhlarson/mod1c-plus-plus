#include "structures.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("You need to put some input file");
		return 0;
	}
	std::list<Point> points = parse_file(argv[1]);
	for (auto v : points)
	{
		std::cout << "Point\n";
		std::cout << v.coords[0][0] << "\n";
		std::cout << v.coords[1][1] << "\n";
		std::cout << v.coords[2][2] << "\n";
		std::cout << v.coords[3][3] << "\n";
		v.scale(10);
		std::cout << "After rotation" << "\n";
		std::cout << v.coords[0][0] << "\n";
		std::cout << v.coords[1][1] << "\n";
		std::cout << v.coords[2][2] << "\n";
		std::cout << v.coords[3][3] << "\n";

	}
	return 0;
}
