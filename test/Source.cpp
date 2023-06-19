#include <iostream>
using namespace std;
#define endlx2 << endl << endl;

void main()
{
	setlocale(LC_ALL, "");
	int const ROWS = 3;
	int const COLS = 4;
	int darr[ROWS][COLS]{};
	int number_of_shift;
	cin >> number_of_shift;


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			darr[i][j] = rand() % 9;
		}
		cout << endl;

	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << darr[i][j] << "\t";
		}
		cout << endl;

	}
	cout << endl;

	
		for (int i = 0; i < number_of_shift; i++)
		{
			double buffer = darr[i][0];
			for (int i = 0; i < ROWS; i++)
			{

				darr[i][0] = darr[i + 1][0];
			}

			darr[ROWS - 1][COLS-1] = buffer;
		}
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << darr[i][j] << "\t";
			}
			cout << endl;

		}
	
}


	
	

	

	

	
			
			
	

	
		
