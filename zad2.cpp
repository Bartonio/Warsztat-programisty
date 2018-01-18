#include <iostream>
using namespace std;
int main()
{int tab[7];
	int i=0;
	int j=0;
	for(int i=0; i<7; i++)
	{
	cin>>tab[i];	
	}
	
	
	
	for(int i=0; i<7; i++)
	{for(int j=0; j<6-i; j++)
		{if(tab[j]>=tab[j+1])
			swap(tab[j],tab[j+1]);
		}
	}
	for(int i=0; i<7; i++)
	{
		cout<<tab[i]<<" ";
	}
	
	return 0;
	}
