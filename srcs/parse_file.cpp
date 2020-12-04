#include <structures.h>

std::list <point>	parse_file(std::string filename)
{
	std::list<point> l;
	std::ifstream file;
	std::string line;

	file.open(filename);
	while (file.good())
	{
		getline(file, line);
		std::cout << line;
		std::cout << '\n';
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
	return l;
}
