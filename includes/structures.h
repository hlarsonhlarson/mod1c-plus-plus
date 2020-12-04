#include <string>
#include <iostream>
#include <regex>
#include <list>
#include <stdio.h>
#include <fstream>

struct point
{
	int x;
	int y;
	int z;
	int theta;
};

struct list
{
	void *data;
	struct list *next;
};

std::list<point> parse_file(std::string filename);

