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
		std::cout << v.coords[0][0];
		std::cout << v.coords[1][1];
		std::cout << v.coords[2][2];
		std::cout << v.coords[3][3];
	}
	return 0;
}
