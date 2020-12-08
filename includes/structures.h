#include <string>
#include <iostream>
#include <regex>
#include <list>
#include <stdio.h>
#include <fstream>
#include <cmath>

class Point
{
public:
	int **coords;
	Point(int xt,int yt,int zt,int thetat);
	void rotate_x(int alpha);
	void rotate_y(int alpha);
	void rotate_z(int alpha);
	void scale(int scale_factor);
	void translate(int *pos_vector);
};

std::list<Point> parse_file(std::string filename);
void point_transform(int ***matrix1_in, int matrix2[4][4]);
