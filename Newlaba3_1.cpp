#include <iostream>
using namespace std;
void rezult(int mat1[3][3], int mat2[3][3], int rezult1[3][3], int n, int k, int m)
{
	for (int i = 0; i < n; i++)
	{
		int h = i;
		for (int f = 0; f < m; f++)
		{
			for (int j = 0; j < k; j++)
			{
				rezult1[i][f] += mat1[i][j] * mat2[j][f];
			}
		}
	}
}

void test(int n, int m, int matrezult[3][3], int mainmatrezult[3][3])
{
	bool bo = false;
	for (int i = 0; i < n; i++)
	for (int j = 0; j < m; j++)
	if (matrezult[i][j] != mainmatrezult[i][j])
		bo = true;
	if (bo == false)
		cout << "ok" << endl;
	else cout << "Fail" << endl;
}
int main()
{
	int matrezult[3][3] = { { 0 } };
	int mat1[3][3] = { { 1, 2, 3 }, { 2, 2, 3 }, { 3, 2, 1 } };
	int mat2[3][3] = { { 1, 2, 5 }, { 3, 2, 2 }, { 7, 2, -1 } };
	int mainmatrezult[3][3] = { { 28, 12, 6 }, { 29, 14, 11 }, { 16, 12, 18 } };
	rezult(mat1, mat2, matrezult, 3, 3, 3);
	test(3, 3, matrezult, mainmatrezult);

	int matrezult1[3][3] = { { 0 } };
	int mat11[3][3] = { { 1, 343, 3 }, { 234, 2, -82 }, { 3, 2, 155 } };
	int mat21[3][3] = { { 1, 2, 123 }, { 3, -14, -10 }, { 1, 2, -1 } };
	int mainmatrezult1[3][3] = { { 1033, -4794, -3310 }, { 158, 276, 28844 }, { 164, 288, 194 } };
	rezult(mat11, mat21, matrezult1, 3, 3, 3);
	test(3, 3, matrezult1, mainmatrezult1);

	int matrezult2[3][3] = { { 0 } };
	int mat12[3][3] = { { 1, 34, 3 }, { 234, 2, -812 }, { 3, 2, 1 } };
	int mat22[3][3] = { { 1, 2123, 123 }, { 3, 1, -10 }, { 1, 232, -1 } };
	int mainmatrezult2[3][3] = { { 106, 2853, -220 }, { -572, 308400, 29574 }, { 10, 6603, 348 } };
	rezult(mat12, mat22, matrezult2, 3, 3, 3);
	test(3, 3, matrezult1, mainmatrezult1);
	system("pause");
}