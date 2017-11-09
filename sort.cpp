#include<iostream>
using namespace std;
int main(){
	
	int i;
    int index;
	

int size =10; 
int t[size]={10,7,19,5,14,3,22,23,17,1};
int	mn=t[0];


index = 0;

for(i=0; i<size; i++)
{
	if(t[i]<mn)
	{
		mn=t[i];
        index = i;
	}
	
	std::cout << "mn" << mn <<" " << index<< std::endl;
	
	int tmp = t[0];
	t[0] = t[index];	
	t[index] = tmp;

	index++;	
}

for(i=0; i<size; i++) cout<<t[i]<< endl;	

	
	
	return 0;
	}
