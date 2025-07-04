#include <iostream>
using namespace std;

int main(){
	int matriz[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	
	int matrizM[4][4]={
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};
	
	cout<<"Matriz original (0,1,2,3)"<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int fila=0,filAlt=0;
	cout<<"Ingrese primera fila que va a intercambiar: ";
	cin>>fila;
	cout<<endl<<"Ingrese segunda fila que va a intercambiar: ";
	cin>>filAlt;

	if(fila<0 || fila>3 || fila<0 || fila>3){
        cout<<"Filas no existentes en la matriz!!!"<<endl;
        return 1;
    }
	for(int j=0;j<4;j++){
        int aux=matriz[fila][j];
        matriz[fila][j]=matriz[filAlt][j];
        matriz[filAlt][j]=aux;
    }
    cout << "\nMatriz resultante:\n";
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matriz[i][j]<< " ";
        }
        cout<<endl;
    }
	return 0;
}