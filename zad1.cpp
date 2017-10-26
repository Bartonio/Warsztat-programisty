#include <iostream>
using namespace std;
int main()
{	int tab[5]={4,2,3,5,1};
	int max=0;
	int min=tab[0];
	for(int i=0; i<5; i++)
	{if(max<=tab[i])
		{max=tab[i];
		}
		else{
		if(min>=tab[i])
			min=tab[i];
		}
	}
	cout<<"max = "<<max<<endl;
	cout<<"min = "<<min;
	
	
	return 0;
	}



