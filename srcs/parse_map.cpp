#include "structures.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("You need to put some input file");
		return 0;
	}
	std::list<point> points = parse_file(argv[1]);
	return 0;
}
