#include <iostream>
#include <thread>
#include <chrono>
#include<conio.h>
#include<string>

using namespace std;
bool Prov(string A)
{
	bool f = 0;
	for (int i = 0; i < A.size(); i++)
		if (isdigit(A[i]) == 0)
		{
				return 0;
		}
		else
		{
			f = 1;
		}
	if (f == 1)
	{
		return 1;
	}
	
	
}
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

	void Zap()
	{
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				mas[i][j] = 252;
			}
		}
	}
	void GameOne()
	{
		bool per = true;
		system("cls");
		Print();
		while (per==true)
		{
			string pr="h";
			int i, j;

		re2:while (Prov(pr) == 0||stoi(pr)>str || stoi(pr) < 1)
			{
				cout << "Enter number X i: \n";
				cin >> pr;
				
			}
		i = stoi(pr);
		pr = 'h';
		while (Prov(pr) == 0||stoi(pr)>stb || stoi(pr) < 1)
		{
			cout << "Enter number X j: \n";
			cin >> pr;
		}
		j = stoi(pr);
		pr = 'h';
			if (mas[i - 1][j - 1] == '0' || mas[i - 1][j - 1] == 'X')
			{
				goto re2;
			}
			mas[i - 1][j - 1] = 'X';
			system("cls");
			Print();
			if (Proverka() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0str() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			
			if (ProverkaXstb() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0stb() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0Diag() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (Proverka0Diag2() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag2() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (ProverkaFull() == 0)
			{
				cout << "Tie\n";
				per = false;
				break;
			}
		re1:while (Prov(pr) == 0 || stoi(pr) > str || stoi(pr) < 1)
		{
			cout << "Enter number 0 i: \n";
			cin >> pr;

		}
		i = stoi(pr);
		pr = 'h';
		while (Prov(pr) == 0 || stoi(pr) > stb || stoi(pr) < 1)
		{
			cout << "Enter number 0 j: \n";
			cin >> pr;
		}
		j = stoi(pr);
		pr = 'h';
			if (mas[i - 1][j - 1] == '0' || mas[i - 1][j - 1] == 'X')
			{
				goto re1;
			}
			mas[i - 1][j - 1] = '0';
			system("cls");
			Print();
			if (ProverkaXstb() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0stb() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (Proverka() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0str() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0Diag() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (Proverka0Diag2() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag2() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (ProverkaFull() == 0)
			{
				cout << "Tie\n";
				per = false;
				break;
			}
			
		}
	}

	void GameBot()
	{
		
		bool per = true;
		while (per == true)
		{
			this_thread::sleep_for(chrono::milliseconds(1000));
			int i, j;
			re2:i = rand() % 3 + 1;
			j = rand() % 3 + 1;
			if (mas[i - 1][j - 1] == '0' || mas[i - 1][j - 1] == 'X')
			{
				goto re2;
			}
			mas[i - 1][j - 1] = 'X';
			system("cls");
			Print();
			
			if (Proverka() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0str() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}

			if (ProverkaXstb() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0stb() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0Diag() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (Proverka0Diag2() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag2() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (ProverkaFull() == 0)
			{
				cout << "Tie\n";
				per = false;
				break;
			}
			this_thread::sleep_for(chrono::milliseconds(1000));
		re1:i = rand() % 3 + 1;
			j = rand() % 3 + 1;
			if (mas[i - 1][j - 1] == '0' || mas[i - 1][j - 1] == 'X')
			{
				goto re1;
			}
			mas[i - 1][j - 1] = '0';
			system("cls");
			Print();

			if (ProverkaXstb() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0stb() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (Proverka() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0str() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0Diag() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (Proverka0Diag2() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag2() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (ProverkaFull() ==0)
			{
				cout << "Tie\n";
				per = false;
				break;
			}
		}
	}
	void PlayerVSbot()
	{

		bool per = true;
		while (per == true)
		{
			this_thread::sleep_for(chrono::milliseconds(1000));
			int i, j;
		re2:i = rand() % 3 + 1;
			j = rand() % 3 + 1;
			if (mas[i - 1][j - 1] == '0' || mas[i - 1][j - 1] == 'X')
			{
				goto re2;
			}
			mas[i - 1][j - 1] = 'X';
			system("cls");
			Print();

			if (Proverka() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				
				break;
			}
			if (Proverka0str() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}

			if (ProverkaXstb() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0stb() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0Diag() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (Proverka0Diag2() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag2() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (ProverkaFull() == 0)
			{
				cout << "Tie\n";
				per = false;
				break;
			}
			this_thread::sleep_for(chrono::milliseconds(1000));
			string pr = "h";
		
		re1:while (Prov(pr) == 0 || stoi(pr) > str || stoi(pr) < 1)
		{
			cout << "Enter number X i: \n";
			cin >> pr;

		}
		i = stoi(pr);
		pr = 'h';
		while (Prov(pr) == 0 || stoi(pr) > stb || stoi(pr) < 1)
		{
			cout << "Enter number X j: \n";
			cin >> pr;
		}
		j = stoi(pr);
		pr = 'h';
			if (mas[i - 1][j - 1] == '0' || mas[i - 1][j - 1] == 'X')
			{
				goto re1;
			}
			mas[i - 1][j - 1] = '0';
			system("cls");
			Print();

			if (ProverkaXstb() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0stb() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (Proverka() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0str() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (Proverka0Diag() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (Proverka0Diag2() == 1)
			{
				cout << "\n\tWon 0!\n";
				per = false;
				break;
			}
			if (ProverkaXDiag2() == 1)
			{
				cout << "\n\tWon X!\n";
				per = false;
				break;
			}
			if (ProverkaFull() == 0)
			{
				cout << "Tie\n";
				per = false;
				break;
			}
		}
	}
	int ProverkaFull()
	{
		for (int i = 0; i < str; i++)
		{
			for (int j = 0; j < stb; j++)
			{
				if (mas[i][j] != 'X' && mas[i][j] != '0')
				{
					return 1;
				}
			}
		}
		return 0;
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
		cout << "\t\t" << "j\t" << "j\t" << "j\t\n";
		cout <<"\t\t" << 1 << "\t" << 2 << "\t" << 3<<"\n\n";
		for (int i = 0; i < str; i++)
		{
			cout <<"i = " << i + 1 << "->>\t";
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
	srand(time(0));
	XO xo;
	
	char vvod;
	do
	{
		system("cls");
		cout << "1 - Game one\n";
		cout << "2 - Game bot VS bot\n";
		cout << "3 - Game bot Vs Player\n";
		cout << "Exit - ESC\n";
		
		vvod = _getch();
		switch (vvod)
		{
		case'1':
		{	
			xo.Zap();
			xo.GameOne();
			system("pause");
			break;
		}
		case'2':
		{
			xo.Zap();
			xo.GameBot();
			system("pause");
			break;
		}
		case'3':
		{
			xo.Zap();
			xo.PlayerVSbot();
			system("pause");
			break;
		}
		}
	} while (vvod != 27);
}