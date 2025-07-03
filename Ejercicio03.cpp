#include <iostream>
using namespace std;

int main(){
	int matriz[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	
	cout<<"Matriz original"<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int sumaDiagDer=0, sumaDiagIzq=0, suma=0;
	
	for(int i=0;i<4;i++){
		sumaDiagDer+=matriz[i][i];
		sumaDiagIzq+=matriz[i][3-i];
	}
	suma=sumaDiagDer+sumaDiagIzq;
	
	cout<<endl<<"La suma de sus 2 diagonales es de "<<suma<<"."<<endl;
	
	return 0;
}