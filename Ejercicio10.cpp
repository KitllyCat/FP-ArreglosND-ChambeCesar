#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(0));
	SetConsoleOutputCP(CP_UTF8);
	cout<<"---Simulacion de un tablero de buscaminas---"<<endl<<endl;
	const int n=10;
	
    int tableroM[n][n];
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		tableroM[i][j]=rand()%2;
		}
	}
	
    cout<<"El tablero buscaminas es el siguiente: "<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<tableroM[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"Presione enter para generar la cantidad de minas que tiene el tablero alrededor:";
	cin.get();
	system("cls");
	
    return 0;
}