#include<stdio.h>

int main(void)
{
	//variable declarations
	int iArray_One[5];
	int iArray_Two[5][3];
	int iArray_Three[100][100][5];
	
	int num_rows_2D;
	int num_colums_2D;
	
	
	int num_rows_3D;
	int num_colums_3D;
	int depth_3D;
		
	//code
	
	printf("\n\n");
	printf("Size Of 1-D integer array iArray_One = %lu\n",sizeof(iArray_One));
	printf("Number of elements in 1-D integer array iArray_One = %lu\n",(sizeof(iArray_One) / sizeof(int)));
	
	printf("\n\n");
	printf("Size of 2-D integer array iArray_Two = %lu\n",sizeof(iArray_Two));
	printf("Number rows in 2-D integer array iArray_Two = %lu\n",(sizeof(iArray_Two) / sizeof(iArray_Two[0])));
	num_rows_2D = (sizeof(iArray_Two) / sizeof(iArray_Two[0]));
	
	printf("Number of elements (columns) in each row in 2-D integer array iArray_Two = %lu\n",(sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0])));
	
	num_colums_2D = (sizeof(iArray_Two[0]) / sizeof(iArray_Two[0][0]));
	
	printf("Number of elements in total in 2-D Array iArray_Two = %d\n",(num_rows_2D * num_colums_2D));
	
	printf("\n\n");
	
	printf("\n\n");
	printf("Size of 3-D integer array iArray_Three = %lu\n",sizeof(iArray_Three));
	
	printf("Number rows in 3-D integer array iArray_Three = %lu\n",(sizeof(iArray_Three) / sizeof(iArray_Three[0])));
	num_rows_3D = (sizeof(iArray_Three) / sizeof(iArray_Three[0]));
	
	printf("Number of elements (columns) in one row in 3-D integer array iArray_Three = %lu\n",(sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0])));
	num_colums_3D = (sizeof(iArray_Three[0]) / sizeof(iArray_Three[0][0]));
	
	printf("Number of elements (depth) in one column in one row in 3-D integer array iArray_Three = %lu\n",(sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0])));
	depth_3D = (sizeof(iArray_Three[0][0]) / sizeof(iArray_Three[0][0][0]));
	
	printf("Number of elements in total in 3-D Array iArray_Three = %d\n",(num_rows_3D * num_colums_3D * depth_3D));
	
	printf("\n\n");
	
	return(0);
}