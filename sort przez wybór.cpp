#include<iostream>
using namespace std;
int main()
{
	
	int i;
    int index;
	

int size =10; 
int t[size]={10,7,19,5,14,3,22,23,17,1};
int	mn;
int j;
j=0;

index = 0;

for(j=0; j<size; j++)
{mn=t[0+j];
index=j;
for(i=0+j; i<size; i++)
{
	if(t[i]<mn)
	{
		mn=t[i];
        index = i;
	}
}
	
	
	t[index] = t[0+j];
	t[0+j] = mn;
	
	
}

	

for(i=0; i<size; i++) cout<<t[i]<< endl;	

	
	
	return 0;
}
