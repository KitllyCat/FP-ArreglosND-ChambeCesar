/*Buscar el Máximo y Mínimo: Escriba un programa que encuentre el valor máximo y el valor mínimo en una matriz de 4x4,
indicando sus posiciones.*/
#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int matriz[4][4];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"Ingrese el valor para la matriz["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	system("cls");
	cout<<"Contenido de la matriz: "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	int mayor=matriz[0][0];
	
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(mayor<matriz[i][j]){
				mayor=matriz[i][j];
			}
		}
	}
	
	Sleep(2500); system("cls");
	cout<<"Buscando el mayor valor de la matriz"<<endl; Sleep(500); system("cls");
	cout<<"Buscando el mayor valor de la matriz."<<endl; Sleep(500); system("cls");
	cout<<"Buscando el mayor valor de la matriz.."<<endl; Sleep(500); system("cls");
	cout<<"Buscando el mayor valor de la matriz..."<<endl; Sleep(500); system("cls");
	cout<<"El mayor valor es el numero "<<mayor<<"."<<endl;
	
	return 0;
}