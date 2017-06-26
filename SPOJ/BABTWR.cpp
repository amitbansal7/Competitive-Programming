/* Amit Bansal - @amitbansal7 */
#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
// Box stacking.

struct Box
{
	int l, w, h;
};

bool compare(struct Box a, struct Box b)
{
	return a.l * a.w > b.l * b.w;
}

int main()
{

	while (1)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;

		int dmns[3];
		struct Box Boxes[6*n];
		int t = 0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d %d", &dmns[0], &dmns[1], &dmns[2]);
			sort(dmns,dmns+3);
			Boxes[t].l = dmns[0];
			Boxes[t].w = dmns[1];
			Boxes[t].h = dmns[2];
			t++;

			if(dmns[2] != dmns[1])
			{
				Boxes[t].l = dmns[0];
				Boxes[t].w = dmns[2];
				Boxes[t].h = dmns[1];
				t++;
			}

			if(dmns[0] != dmns[1])
			{
				Boxes[t].l = dmns[1];
				Boxes[t].w = dmns[2];
				Boxes[t].h = dmns[0];
				t++;
			}

		}

		sort(Boxes, Boxes + t, compare);
		int H[t];

		for (int i = 0; i < t; i++)
			H[i] = Boxes[i].h;

		int maxh;
		int ans = INT_MIN;
		for (int i = 1; i < t; i++)
		{
			maxh = 0;
			for (int j = 0; j < i; j++)
			{
				if (Boxes[i].l < Boxes[j].l && Boxes[i].w < Boxes[j].w)
					maxh = max(maxh,H[j]);

				H[i] = maxh + Boxes[i].h;
			}
		}

		maxh = 0;
		for(int i=0;i<t;i++)
			maxh = max(maxh,H[i]);

		printf("%d\n",maxh);
	}

}
