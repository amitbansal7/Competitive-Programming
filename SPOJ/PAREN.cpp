/* Amit Bansal - @amitbansal7 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T[100][100];
	int F[100][100];

	int t;
	string s;
	scanf("%d", &t);
	getline(cin, s);

	while (t--)
	{
		char exp[100];
		char op[100];
		getline(cin, s);
		int e = 0, o = 0;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'T') exp[e++] = 'T';

			else if (s[i] == 'F') exp[e++] = 'F';

			else if (s[i] == 'a')
			{
				op[o++] = '&';
				i += 2;
			}

			else if (s[i] == 'o')
			{
				op[o++] = '|';
				i++;
			}

			else  if (s[i] == 'x')
			{
				op[o++] = '^';
				i += 2;
			}
			else
				continue;
		}

		int n = e;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				T[i][j] = F[i][j] = 0;

		for (int i = 0; i < n; i++)
		{
			T[i][i] = (exp[i] == 'T') ? 1 : 0;
			F[i][i] = (exp[i] == 'F') ? 1 : 0;
		}

		for (int l = 2; l <= n; l++)
		{
			for (int i = 0; i < n - l + 1; i++)
			{
				int j = l + i - 1;

				for (int k = i; k < j; k++)
				{
					int Tik = T[i][k] + F[i][k];
					int Tkj = T[k + 1][j] + F[k + 1][j];

					if (op[k] == '&')
					{
						T[i][j] += T[i][k] * T[k + 1][j];
						F[i][j] += Tik * Tkj  - T[i][k] * T[k + 1][j];
					}
					else if (op[k] == '|')
					{
						T[i][j] += Tik * Tkj - F[i][k] * F[k + 1][j];
						F[i][j] += F[i][k] * F[k + 1][j];
					}
					else if (op[k] == '^')
					{
						T[i][j] += T[i][k] * F[k + 1][j] + F[i][k] * T[k + 1][j];
						F[i][j] += T[i][k] * T[k + 1][j] + F[i][k] * F[k + 1][j];
					}
				}
			}
		}

		printf("%d\n", T[0][n - 1]);
	}
	return 0;
}
