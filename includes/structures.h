#include <string>
#include <iostream>
#include <regex>
#include <list>
#include <stdio.h>
#include <fstream>

class Point
{
public:
	int x;
	int y;
	int z;
	int theta;
	Point(int xt,int yt,int zt,int thetat);
};

std::list<Point> parse_file(std::string filename);
