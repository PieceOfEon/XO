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
			if (Proverka0str() == 1)
			{
				per = false;

				break;
			}
			
			if (ProverkaXstb() == 1)
			{
				per = false;

				break;
			}
			if (Proverka0stb() == 1)
			{
				per = false;

				break;
			}
			if (ProverkaXDiag() == 1)
			{
				per = false;

				break;
			}
			if (Proverka0Diag() == 1)
			{
				per = false;

				break;
			}
			if (Proverka0Diag2() == 1)
			{
				per = false;

				break;
			}
			if (ProverkaXDiag2() == 1)
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
			if (ProverkaXstb() == 1)
			{
				per = false;

				break;
			}
			if (Proverka0stb() == 1)
			{
				per = false;

				break;
			}
			if (Proverka() == 1)
			{
				per = false;
			
				break;
			}
			if (Proverka0str() == 1)
			{
				per = false;

				break;
			}
			if (ProverkaXDiag() == 1)
			{
				per = false;

				break;
			}
			if (Proverka0Diag() == 1)
			{
				per = false;

				break;
			}
			if (Proverka0Diag2() == 1)
			{
				per = false;

				break;
			}
			if (ProverkaXDiag2() == 1)
			{
				per = false;

				break;
			}
			
			
		}
	}
 
	int Proverka()
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
				if (j == stb - 1)
				{
					if ((mas[i][j] == 'X' && b == 0))
					{
						return 1;
					}
				}

			}

		}
		return 0;
	}

	int Proverka0str()
	{
		bool b = 0;
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				if (mas[i][j] != '0')
				{
					b = 1;
					break;
				}
				else
				{
					b = 0;
				}
				if (j == stb - 1)
				{
					if ((mas[i][j] == '0' && b == 0))
					{
						return 1;
					}
				}

			}

		}
		return 0;
	}

	bool ProverkaXstb()
	{
		bool b = 0;
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				if ((mas[j][i] != 'X') )
				{
					b = 1;
					break;
				}
				else
				{
					b = 0;
				}
				if (j==stb-1)
				{
					if ((mas[str-1][i] == 'X' && b == 0))
					{
						return 1;
					}
				}
				
			}

		}
		return 0;
	}
	bool Proverka0stb()
	{
		bool b = 0;
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				if ((mas[j][i] != '0'))
				{
					b = 1;
					break;
				}
				else
				{
					b = 0;
				}
				if (j == stb - 1)
				{
					if ((mas[str - 1][i] == '0' && b == 0))
					{
						return 1;
					}
				}

			}

		}
		return 0;
	}
	bool ProverkaXDiag()
	{
		bool b = 0;
		for (int i = 0; i < str; i++)
		{
			if (mas[i][i] != 'X')
			{
				b = 1;
				break;
			}
			else
			{
				b = 0;
			}
			if (i == str - 1)
			{
				if ((mas[i][i] == 'X' && b == 0))
				{
					return 1;
				}
			}
		}
		return 0;
	}

	bool Proverka0Diag()
	{
		bool b = 0;
		for (int i = 0; i < str; i++)
		{
			if (mas[i][i] != '0')
			{
				b = 1;
				break;
			}
			else
			{
				b = 0;
			}
			if (i == str - 1)
			{
				if ((mas[i][i] == '0' && b == 0))
				{
					return 1;
				}
			}
		}
		return 0;
	}

	bool Proverka0Diag2()
	{
		bool b = 1;
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				if (i + j == str - 1)
				{
					if (mas[i][j] != '0')
					{
						i = str - 1;
						b = 1;
						break;
					}
					else
					{
						b = 0;
					}
					if (b == 0&&i==str-1)
					{
							return 1;
						
					}
				}
				
			}
			
			
		}
		return 0;
	}
	bool ProverkaXDiag2()
	{
		bool b = 1;
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				if (i + j == str - 1)
				{
					if (mas[i][j] != 'X')
					{
						i = str - 1;
						b = 1;
						break;
					}
					else
					{
						b = 0;
					}
					if (b == 0 && i == str - 1)
					{
						return 1;

					}
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