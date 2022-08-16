#include <iostream>

using namespace std;

class XO
{
private:

	char** mas;
	int str=3;
	int stb=3;
	
public:

	XO()
	{
		mas = new char*[str];
		for (int i = 0; i < str; i++)
		{
			mas[i] = new char[stb];
		}

	}

	void Write()
	{
		bool per = true;
		while (per==true)
		{
			int i, j;
			re2:cout << "Enter number X i: \n";
			cin >> i;
			cout << "Enter number X j: \n";
			cin >> j;
			if (mas[i - 1][j - 1] == '0' || mas[i - 1][j - 1] == 'X')
			{
				goto re2;
			}
			mas[i - 1][j - 1] = 'X';

			Print();
			if (Proverka() == 1)
			{
				per = false;
				break;
			}
			re1: cout << "Enter number 0 i: \n";


			cin >> i;
			cout << "Enter number 0 j: \n";
			cin >> j;
			if (mas[i - 1][j - 1] == '0' || mas[i - 1][j - 1] == 'X')
			{
				goto re1;
			}
			mas[i - 1][j - 1] = '0';
			
			Print();
			if (Proverka() == 1)
			{
				per = false;
			
				break;
			}
			
			
		}
	}
 
	bool Proverka()
	{
		bool b = 0;
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				if (mas[i][j] != 'X')
				{
					b = 1;
					break;
				}
				else
				{
					b = 0;
				}
				if (mas[i][stb - 1] == 'X' && b==0)
				{
					return 1;
				}
			}

		}
		return 0;
	}

	void Print()
	{
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				cout << mas[i][j]<<"\t";
			}
			cout << "\n";
		}
		
	}

};

int main()
{
	XO xo;
	xo.Write();
	/*xo.Print();*/

}