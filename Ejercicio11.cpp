#include <iostream>
#include <windows.h>
using namespace std;
const int n=10;

void verBosque(int bosque[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<bosque[i][j]<<" ";
        }
        cout<<endl;
    }
}

int bosque1[n][n]={
    {0,0,0,0,0,0,0,0,0,0},
    {0,1,1,0,0,0,0,0,0,0},
    {0,1,2,0,0,0,0,0,0,0},
    {0,2,2,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,1,1,1,0,0,0},
    {0,0,0,0,1,2,1,0,0,0},
    {0,0,0,0,1,1,1,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
};
int bosque2[n][n]={
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,1,1,1,0,0,0,0},
    {0,0,0,1,2,1,0,0,0,0},
    {0,0,0,1,1,1,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0}
};
int bosque3[n][n]={
    {1,0,0,0,0,0,0,0,0,1},
    {0,2,0,0,0,0,0,0,2,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,2,0,0,0,0,0,0,2,0},
    {1,0,0,0,0,0,0,0,0,1}
};

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int opcion;
	do{
		cout<<"---Simulación de Propagación de Fuego---"<<endl<<endl;
		cout<<"Escoja que bosque desea simular: "<<endl;
		cout<<"1)Bosque 1(bosque ejemplo)"<<endl;
		cout<<"2)Bosque 2(en el centro)"<<endl;
		cout<<"3)Bosque 3(en las esquinas)"<<endl;
		cout<<"4)Salir de la simulación..."<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				system("cls");
				verBosque(bosque1);
				break;
			}
			case 2:{
				system("cls");
				verBosque(bosque2);
				break;
			}
			case 3:{
				system("cls");
				verBosque(bosque3);
				break;
			}
			case 4:{
				system("cls");
				cout<<"Saliendo del programa..."<<endl;
				break;
			}
			default:{
				cout<<"Opcion invalida, intente de nuevo...";
				Sleep(1500);
				system("cls");
				break;
			}
		}
		
	}while(opcion!=4);
	return 0;
}