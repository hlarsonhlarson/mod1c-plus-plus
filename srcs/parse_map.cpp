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
        	std::cout << v.x << "\n";
        	std::cout << v.y << "\n";
        	std::cout << v.z << "\n";
	}
	return 0;
}
