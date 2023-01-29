#include <stdio.h>

double A[3][3]; // matrix A
double B[3][3]; // matrix B
double AxB[3][3]; // เก็บผลคูณ

// function สำหรับแสดงเมทริกซ์ผลลัพธ์ (ขนาด 3x3)
void matrix(double mat[3][3])
{

	int i, j; // ตัวแปรสำหรับใช้วนลูป
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(j > 0) // ไว้สำหรับพิมพ์ spacebar ระหว่างตัวเลข
				printf(" "); // (พิมพ์เมื่อ j == 1 หรือ j == 2)
			printf("%.2lf", mat[i][j]);
		}
		printf("\n");
	}

}

int main()

{
	int i, j, k; // ตัวแปรสำหรับใช้วนลูป

	// รับเมทริกซ์ A
	for(i = 0; i < 3; i++) // i ใช้วนทีละแถว
	{
		for(j = 0; j < 3; j++) // j ใช้วนทีละหลักหรือคอลัมน์
		{
			scanf("%lf", &A[i][j]);
		}
	}

	// รับเมทริกซ์ B
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%lf", &B[i][j]);
		}
	}

	// หา A x B
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			double sum = 0;
			for(k = 0; k < 3; ++k)
				sum = sum + (A[i][k] * B[k][j]);
			AxB[i][j] = sum;
		}
	}
	printf("A x B\n");
	matrix(AxB);
	return 0;

}

// #include <stdio.h>
// int main()
// {
//     float arr1[3][3];
//     float arr2[3][3];
//     int r, c;
//     int sum = 0;
//     for (r=0; r < 3; r++){
//         for (c=0; c < 3; c++){
//             scanf("%f", &arr1[r][c]);
//         }
//     }
//     for (r=0; r < 3; r++){
//         for (c=0; c < 3; c++){
//             scanf("%f", &arr2[r][c]);
//         }
//     }
//     printf("A x B\n");
//     printf("%.2f ", ((arr1[0][0] * arr2[0][0]) + (arr1[0][1] * arr2[1][0]) +  (arr1[0][2] * arr2[2][0])));
//     printf("%.2f ", ((arr1[0][0] * arr2[0][1]) + (arr1[0][1] * arr2[1][1]) +  (arr1[0][2] * arr2[2][1])));
//     printf("%.2f\n", ((arr1[0][0] * arr2[0][2]) + (arr1[0][1] * arr2[1][2]) +  (arr1[0][2] * arr2[2][2])));
//     printf("%.2f ", ((arr1[1][0] * arr2[0][0]) + (arr1[1][1] * arr2[1][0]) +  (arr1[1][2] * arr2[2][0])));
//     printf("%.2f ", ((arr1[1][0] * arr2[0][1]) + (arr1[1][1] * arr2[1][1]) +  (arr1[1][2] * arr2[2][1])));
//     printf("%.2f\n", ((arr1[1][0] * arr2[0][2]) + (arr1[1][1] * arr2[1][2]) +  (arr1[1][2] * arr2[2][2])));
//     printf("%.2f ", ((arr1[2][0] * arr2[0][0]) + (arr1[2][1] * arr2[1][0]) +  (arr1[2][2] * arr2[2][0])));
//     printf("%.2f ", ((arr1[2][0] * arr2[0][1]) + (arr1[2][1] * arr2[1][1]) +  (arr1[2][2] * arr2[2][1])));
//     printf("%.2f\n", ((arr1[2][0] * arr2[0][2]) + (arr1[2][1] * arr2[1][2]) +  (arr1[2][2] * arr2[2][2])));
//     return 0;
// }

// #include<stdio.h>
 
// int main() {
//     double M[3][3], N[3][3];
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             scanf("%lf", &M[i][j]);
//         }
//     }
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             scanf("%lf", &N[i][j]);
//         }
//     }
//     printf("A x B\n");
//     printf("%.2lf %.2lf %.2lf\n", M[0][0]*N[0][0] + M[0][1]*N[1][0] + M[0][2]*N[2][0], M[0][0]*N[0][1] + M[0][1]*N[1][1] + M[0][2]*N[2][1], M[0][0]*N[0][2] + M[0][1]*N[1][2] + M[0][2]*N[2][2]);
//     printf("%.2lf %.2lf %.2lf\n", M[1][0]*N[0][0] + M[1][1]*N[1][0] + M[1][2]*N[2][0], M[1][0]*N[0][1] + M[1][1]*N[1][1] + M[1][2]*N[2][1], M[1][0]*N[0][2] + M[1][1]*N[1][2] + M[1][2]*N[2][2]);
//     printf("%.2lf %.2lf %.2lf\n", M[2][0]*N[0][0] + M[2][1]*N[1][0] + M[2][2]*N[2][0], M[2][0]*N[0][1] + M[2][1]*N[1][1] + M[2][2]*N[2][1], M[2][0]*N[0][2] + M[2][1]*N[1][2] + M[2][2]*N[2][2]);
//     return 0;
// }

// #include "stdio.h"
 
// int main(){
//     double M1[9], M2[9], x, y, z;
//     for(int i = 0; i < 9; ++i){scanf("%lf", &M1[i]);}
//     for(int i = 0; i < 9; ++i){scanf("%lf", &M2[i]);}
//     printf("A x B\n");
//     for (int i=0; i<=6; i+=3){
//         x = M1[i]*M2[0] + M1[i+1]*M2[3] + M1[i+2]*M2[6];
//         y = M1[i]*M2[1] + M1[i+1]*M2[4] + M1[i+2]*M2[7];
//         z = M1[i]*M2[2] + M1[i+1]*M2[5] + M1[i+2]*M2[8];
//         printf("%.2lf %.2lf %.2lf\n", x, y, z);
//     }
// }
