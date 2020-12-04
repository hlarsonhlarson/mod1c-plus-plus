#include <string>
#include <iostream>
#include <regex>
#include <list>
#include <stdio.h>

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

int parse_file(string filename);

