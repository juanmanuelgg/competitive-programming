using namespace std;
#include <cstdio>

int main()
{
	int casos, max, V[10+1];
	char urls [10+1][100+10];
	scanf("%d", &casos);
	
	for(int c=1; c<=casos; c++)
	{
		max=0;
		for(int i=0; i<10; i++)
		{
			scanf("%s %d", urls[i], &V[i]);
			if(V[i]>max) max=V[i];
		}
		
		printf("Case #%d:\n", c);
		for(int i=0; i<10; i++)
			if(V[i]==max)
				puts(urls[i]);
	}

	return 0;
}
