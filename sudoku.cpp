#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;
int SUM;
int a[10][10];
int sum = 0;
int kind;
int N;//代表输出的数独矩阵个数 
FILE* fp1, *fp2;
void Input(int a[][10]);
void Output(int a[][10]);
int check_num(int a[][10], int i, int j, int num);
void TraceBack(int n);
void arrange();
void Swap();
void SwapColumn();

int main(int   argc, char*   argv[])
{
	int N = 0;
	errno_t  err2;
	memset(a, 0, sizeof(a));

	if (strcmp(argv[1], "-c") == 0)
	{
		kind = 1;
		if (argc != 3)
		{
			cout << "命令输入错误，请输入想要的终局数" << endl;
			return 0;
		}
		else
		{
			for (int i = 0; i<int(strlen(argv[2])); i++)
			{
				if (argv[2][i]<'0' || argv[2][i]>'9')
				{
					cout << "命令输入错误，请输入想要的终局数" << endl;
					return 0;
				}
			}
		}
		err2 = fopen_s(&fp2, "sudoku.txt", "w");
		SUM = atoi(argv[2]);
		a[0][0] = (5 + 4) % 9 + 1;//学号后两位54 
		TraceBack(1);//
		cout << "终局生成完毕" << endl;
		if (fp2 != 0)
		{
			fclose(fp2);
		}
	}
	else
		if (strcmp(argv[1], "-s") == 0)
		{

			if (argc != 3)
			{
				cout << "命令输入错误，请输入输出路径" << endl;
				return 0;
			}

			SUM = 1;
			if (fopen_s(&fp1, argv[2], "r") != 0)
			{
				cout << "路径错误" << endl;
				return 0;
			}
			err2 = fopen_s(&fp2, "sudoku.txt", "w");
			if (fp1 != 0)
			{
				do
				{
					memset(a, 0, sizeof(a));
					kind = 2;
					Input(a);
					TraceBack(0);
				} while (fgetc(fp1) == '\n');
			}

			cout << "解数独完成" << endl;
			if (fp1 != 0)
			{
				fclose(fp1);
			}
			if (fp2 != 0)
			{
				fclose(fp2);
			}
		}
		else
		{
			cout << "命令输入错误，只能是-c或-s" << endl;
			return 0;
		}
	return 0;
}

void Input(int a[][10])
{
	char temp;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
		{
			temp = fgetc(fp1);
			if (temp == ' ' || temp == '\n')
			{
				temp = fgetc(fp1);
			}
			a[i][j] = temp - '0';
			if (check_num(a, i, j, a[i][j]) == 0)
			{
				cout << "9*9初始输入有误" << endl;
				exit(0);
			}
		}
}
void Output(int a[][10])
{
	if (N != 0)
	{
		fputc('\n', fp2);
		fputc('\n', fp2);
	}
	else
	{
		N++;
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			fputc(a[i][j] + '0', fp2);
			fputc(' ', fp2);
		}
		fputc(a[i][8] + '0', fp2);
		if (i != 8)
		{
			fputc('\n', fp2);
		}
	}
}

int check_num(int a[][10], int i, int j, int num)
{
	if (num == 0)
	{
		return 1;
	}

	for (int k = 0; k < 9; k++) //本行 
	{
		if (a[i][k] == num&&k != j&&a[i][k] != 0)
			return 0;
	}

	for (int k = 0; k < 9; k++) //本列 
	{
		if (a[k][j] == num&&k != i&&a[k][j] != 0)
			return 0;
	}

	for (int k = i / 3 * 3; k < i / 3 * 3 + 3; k++)//九宫格 
		for (int l = j / 3 * 3; l < j / 3 * 3 + 3; l++)
		{
			if (a[k][l] == num && !(k == i&&l == j))
				return 0;
		}

	return 1;
}

void TraceBack(int n)
{
	//kind = 1代表输入为-c，也就是生成数独
	//kind = 2代表输入-s，也就是解数独
	//kind = 3代表解完或生成完毕 
	if (sum > SUM && kind == 1)
	{
		kind = 3;
	}
	if (kind == 3)
	{
		return;
	}

	if (n > 80)//代表解完当前棋盘
	{
		if (kind == 2)
		{
			Output(a);
			kind = 3;
			return;
		}
		arrange();//进行排列组合并输出
		return;
	}

	if (a[n / 9][n % 9] != 0)//当前格子有数字，不允许更改，直接跳到下一格
	{
		TraceBack(n + 1);
	}
	else
	{
		for (int i = 1; i <= 9; i++)
		{
			int temp = a[n / 9][n % 9];
			if (check_num(a, n / 9, n % 9, i))
			{
				a[n / 9][n % 9] = i;
				TraceBack(n + 1);
			}
			a[n / 9][n % 9] = temp;
		}
	}
}

void SwapColumn(int i, int j)
{
	for (int k = 0; k < 9; k++)
	{
		int temp = a[k][i];
		a[k][i] = a[k][j];
		a[k][j] = temp;
	}
}

void Swap(int n, int m)//n为开始交换的列 如n=3代表345列 n=6代表678列 m=0-5 为3列排列组合的6种方式
{
	if (m == 0)
	{
		return;
	}
	if (m == 1)
	{
		SwapColumn(n, n + 1);
		return;
	}
	if (m == 2)
	{
		SwapColumn(n, n + 2);
		return;
	}
	if (m == 3)
	{
		SwapColumn(n + 2, n + 1);
		return;
	}
	if (m == 4)
	{
		SwapColumn(n, n + 1);
		SwapColumn(n + 1, n + 2);
		return;
	}
	if (m == 5)
	{
		SwapColumn(n + 2, n + 1);
		SwapColumn(n + 1, n);
		return;
	}

}

void arrange()
{
	for (int i = 0; i < 6; i++)
	{
		Swap(3, i);
		for (int j = 0; j < 6; j++)
		{
			Swap(6, j);
			sum++;
			if (sum > SUM)
			{
				return;
			}
			Output(a);
			//后面都是还原
			if (j == 5)
			{
				Swap(6, 4);
			}
			else
				if (j == 4)
				{
					Swap(6, 5);
				}
				else
				{
					Swap(6, j);
				}
		}
		if (i == 4)
		{
			Swap(3, 5);
		}
		else
			if (i == 5)
			{
				Swap(3, 4);
			}
			else
			{
				Swap(3, i);
			}
	}
}

