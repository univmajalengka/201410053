#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cout<<"Masukan nilai pola(N): ";
	cin>>n;
	
	for (i=1; i<=n; i++){
		for (j=1; j<=i; j++){
			cout <<"*";
		}
		cout<<endl;
	} 
	return 0;
}


