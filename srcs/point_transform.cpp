#include <structures.h>

//WARNING no error checks,
void point_transform(int ***matrix1_in, int matrix2[4][4])
{
	int **matrix1 = *matrix1_in;
	int tmp_matrix[4][4];

	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
			tmp_matrix[i][j] = 0;
	}
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
			tmp_matrix[i][j] += matrix1[i][j] * matrix2[i][j];
	}
	for (int i=0;i<4;i++)
	{
		for (int j=0; j<4;j++)
			matrix1[i][j] = tmp_matrix[i][j];
	}
}
