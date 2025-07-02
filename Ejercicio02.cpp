#include <iostream>
using namespace std;

int main(){
	int matriz[3][3]={
		{1,2,3},
		{4,2,6},
		{7,2,9}
	};
	
	cout<<"Matriz 1"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int val,fila=0,columna=0;
	cout<<endl<<"¿Que valor desea buscar?: ";
	cin>>val;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(val==matriz[i][j]){
				columna=i;
				fila=j;
				cout<<"El valor "<<val<<" se encuentra en la fila "<<fila<<" y en la columna "<<columna<<"."<<endl;
				cout<<fila<<"-"<<columna<<endl<<endl;
            }
		}
	}
	
	return 0;
}