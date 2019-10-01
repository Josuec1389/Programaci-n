#include <iostream>
using namespace std;

void llenarunos(int vec[],int n);
void mostrar(int vec[], int n);
void coladera(int vec[],int n);

int main() {
	
	int vec[1000];
	llenarunos(vec,1000);
	coladera(vec,1000);
	mostrar(vec,1000);
			
	return 0;
}

void llenarunos(int vec[],int n){
	for(int i=0;i<n;i++)
	{
		vec[i]=1;
	}
}

void coladera(int vec[],int n)
{
	for(int i=2;i<n;i++){
		if (vec[i]) //vec==1
		for(int j=2;i*j<n;j++){
			vec[i*j]=0;
		}
	}
}

void mostrar(int vec[], int n)
{
	for(int i=2;i<n;i++)
	{
		if(vec[i]){
			cout<<i<<" ";
		}
	}
}
