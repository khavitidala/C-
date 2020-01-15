#include <iostream>
using namespace std;

bool visited[25][25];
int count, b, k;
int arr[25][25];

void f(int x, int y, int c)
{
	if((x>=0&&x<b)&&(y>=0&&y<k))
	{
		if(!visited[x][y])
			if(arr[x][y]==c)
			{
				count++;
				visited[x][y]=true;
				f(x+1,y,c);
				f(x-1,y,c);
				f(x,y+1,c);
				f(x,y-1,c);
			}
	}
}

int main()
{
	int x, y;
	cin>>b>>k;
	for(int i=0;i<b;i++)
	{
		for (int j = 0; j < k; j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<b;i++)
	{
		for (int j = 0; j < k; j++)
		{
			visited[i][j]=false;
		}
	}
	cin>>x>>y;
	int c = arr[x][y];
	f(x, y, c);
	cout<<count*(count-1)<<endl;
}