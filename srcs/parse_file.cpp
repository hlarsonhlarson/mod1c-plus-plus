#include <structures.h>

Point set_point(std::string coords)
{
	std::regex r("([0-9]+)");
	std::string s = coords;
	int counter = 0;
	int x = 0;
	int y = 0;
	int z = 0;

	for(std::sregex_iterator i = std::sregex_iterator(s.begin(), s.end(), r);
			i != std::sregex_iterator();
			++i )
	{
		std::smatch m = *i;
		if (counter == 0)
		{
			x = stoi(m.str());
		}
		else if (counter == 1)
		{
			y = stoi(m.str());
		}
		else if (counter == 2)
		{
			z = stoi(m.str());
		}
		else
		{
			std::cout << "bad coordinates, too many";
			exit(1);
		}
		counter++;
	}
	return Point(x, y, z, 1);
}


std::list <Point>	parse_file(std::string filename)
{
	std::list<Point> l;
	std::ifstream file;
	std::string line;

	file.open(filename);
	while (file.good())
	{
		getline(file, line);
		std::regex r("\\(([0-9]+),([0-9]+),([0-9]+)\\)");

		for(std::sregex_iterator i = std::sregex_iterator(line.begin(), line.end(), r);
				i != std::sregex_iterator();
				++i )
		{
			std::smatch m = *i;
			Point local_point = set_point(m.str());
			l.push_back(local_point);
		}
	}
	return l;
}

