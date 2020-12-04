#include "structures.h"

int parse_file(string filename)
{
	std::list<point> l;
	ifstream in;
	std::string line;

	in.open(filename);
	while (in.good())
	{
		getline(in, line);
		printf("%s\n", line);
	}

	std::string s = "(123,123,123) (124,124,124)";
	std::regex r("\\(([0-9]+),([0-9]+),([0-9]+)\\)");

	for(std::sregex_iterator i = std::sregex_iterator(s.begin(), s.end(), r);
			i != std::sregex_iterator();
			++i )
	{
		std::smatch m = *i;
		std::cout << m.str() << " at position " << m.position() << '\n';
	}
}
