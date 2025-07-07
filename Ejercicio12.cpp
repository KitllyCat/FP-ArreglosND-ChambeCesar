#include <iostream>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(0));
	SetConsoleOutputCP(CP_UTF8);
	cout<<"---Simulacion del Juego de la Vida de Conway---"<<endl<<endl;
	const int n=10;
	
    int tableroG[n][n];
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		tableroG[i][j]=rand()%2;
		}
	}
	
    cout<<"El tablero inicial es el siguiente: "<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<tableroG[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"Presione enter para comenzar con el juego y ver la siguiente generacion:";
	cin.get(); system("cls");
		
    return 0;
}
