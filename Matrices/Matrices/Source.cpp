#include "Includes.h"

void matrices()
{
	int Numeros[100][100], filas, columnas;
	cout << "Introdusca el numero de filas" << endl;
	cin >> filas;
	cout << "Introdusca el numero de Columnas" << endl;
	cin >> columnas;

	int Numeros2[100][100], filas2, columnas2;
	cout << "Introdusca el numero de filas" << endl;
	cin >> filas2;
	cout << "Introdusca el numero de Columnas" << endl;
	cin >> columnas2;

	int N = filas * columnas;
	if (filas == columnas2 or columnas == filas2)
	{
		for (int i = 0; i < filas; i++)
		{
			for (int j = 0; j < columnas; j++)
			{
				cout << "Digite un numero [" << i << "][" << j << "]:" << endl;
				cin >> Numeros[i][j];
			}
		}

		for (int x = 0; x < filas; x++)
		{
			for (int y = 0; y < columnas; y++)
			{
				cout << "Digite un numero [" << x << "][" << y << "]:" << endl;
				cin >> Numeros2[x][y];
			}
		}

		for (int e=0; e < filas; e++)
		{
			for (int r=0; r < columnas; r++)
			{
				cout << Numeros[e][r];
			}
			cout << "\n";
		}

		for (int e=0; e < filas2; e++)
		{
			for (int r=0; r < columnas2; r++)
			{
				cout << Numeros2[e][r];
			}
			cout << "\n";
		}

		int Numeros3[100][100];
		int p = 0;
		int l = 0;
		int Sum = 0;
		for (int w = 0; w < filas; w++)
		{
			for (int q = 0; q < columnas; q++)
			{
				Numeros3[w][q] = 0;
				for (int k = 0; k < columnas; k++)
				{
					Numeros3[w][q] += Numeros[w][k] * Numeros2[k][q];
				}
			}
		}

		for (int e = 0; e < filas; e++)
		{
			for (int r = 0; r < columnas; r++)
			{
				cout << Numeros3[e][r];
			}
			cout << "\n";
		}
	}
	else
	{
		cout << "No se puede realizar" << endl;
	}
}
void Arbol()
{
	int i;
	cout << "Cuanto saco en el examen del 1 al 15?";
	cin >> i;
	if (i < 8)
	{
		cout << "Matematicas 100" << endl;
	}
	else if (i == 8 or i == 9 or i == 10)
	{
		cout << "Cuanto saco en el segundo examen?" << endl;
		cin >> i;
		if (i <= 6)
		{
			cout << "Matematicas 100" << endl;
		}
		else if (i > 6)
		{
			cout << "Matematicas 110" << endl;
		}
	}
	else if (i > 10)
	{
		cout << "Cuanto saco en el segundo examen?" << endl;
		cin >> i;
		if (i <= 10)
		{
			cout << "Matematicas 110" << endl;
		}
		else if (i > 10)
		{
			cout << "Matematicas 120" << endl;
		}
	}
}
int main()
{
	int Ele;
	cin >> Ele;
	switch (Ele)
	{
	case 1:
		matrices();
	case 2:
		Arbol();
	default:
		keep_window_open();
		return 0;
	}
}