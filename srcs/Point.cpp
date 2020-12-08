#include <structures.h>

Point::Point(int xt,int yt,int zt,int thetat)
{
	coords = new int* [4];
	for (int i=0; i<4; i++)
	{
		coords[i] = new int [4];
		for (int j=0; j<4; j++)
			coords[i][j] = 0;
	}
	coords[0][0] = xt;
	coords[1][1] = yt;
	coords[2][2] = zt;
	coords[3][3] = thetat;
}


void Point::rotate_x(int alpha)
{
	int rotation_matrix[4][4] = {
		{1, 0, 0, 0},
		{0, (int)cos(alpha), (int)sin(alpha), 0},
		{0, -(int)sin(alpha), (int)cos(alpha), 0},
		{0, 0, 0, 1}
	};
	point_transform(&coords, rotation_matrix);
}


void Point::rotate_y(int alpha)
{
	int rotation_matrix[4][4] = {
		{(int)cos(alpha), 0, -(int)sin(alpha), 0},
		{0, 1, 0, 0},
		{(int)sin(alpha), 0, (int)cos(alpha), 0},
		{0, 0, 0, 1}
	};
	point_transform(&coords, rotation_matrix);
}


void Point::rotate_z(int alpha)
{
	int rotation_matrix[4][4] = {
		{(int)cos(alpha), (int)sin(alpha), 0, 0},
		{-(int)sin(alpha), (int)cos(alpha), 0, 0},
		{0, 0, 1, 0},
		{0, 0, 0, 1}
	};
	point_transform(&coords, rotation_matrix);
}


void Point::scale(int scale_factor)
{
	int scale_matrix[4][4] = {
		{scale_factor, 0, 0, 0},
		{0, scale_factor, 0, 0},
		{0, 0, scale_factor, 0},
		{0, 0, 0, 1}
	};
	point_transform(&coords, scale_matrix);
}


void Point::translate(int *pos_vector)
{
	int translation_matrix[4][4] = {
		{1, 0, 0, 0},
		{0, 1, 0, 0},
	    	{0, 0, 1, 0},
		{pos_vector[0], pos_vector[1], pos_vector[2], 1}
	};
	point_transform(&coords, translation_matrix);
}
