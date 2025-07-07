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

void quemarArbol(int bosque[n][n], int bosqueFinal[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bosque[i][j]==0){ //a comprobar los arboles alrededor
                bool arbolQuemado=false;
                for(int vx=-1;vx<=1;vx++){
                    for(int vy=-1;vy<=1;vy++){
                        if (vx==0 && vy==0){
                        	continue;
						}
                    	int ni=i+vx;
                        int nj=j+vy;
                        if (ni>=0 && ni<n && nj>=0 && nj<n){
                            if (bosque[ni][nj]==1){
                                arbolQuemado=true;
                            }
                        }
                    }
                }
                if(arbolQuemado){
				    bosqueFinal[i][j]=1;
				}else{
				    bosqueFinal[i][j]=0;
				} 
            }else if(bosque[i][j]==1){
                bosqueFinal[i][j]=2;
            }else{
                bosqueFinal[i][j]=2;
            }
        }
    }
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int bosqueFinal[n][n];
	int opcion;
	do{
		cout<<"---Simulación de Propagación de Fuego---"<<endl<<endl;
		cout<<"Escoja que bosque desea simular: "<<endl;
		cout<<"1)Bosque 1(bosque ejemplo)"<<endl;
		cout<<"2)Bosque 2(en el centro)"<<endl;
		cout<<"3)Bosque 3(en las esquinas)"<<endl;
		cout<<"4)Salir de la simulación..."<<endl;
		cout<<"Escoja su opcion:";
		cin>>opcion;
		switch(opcion){
			case 1:{
				system("cls");
				cout<<"---Bosque Inicial---"<<endl<<endl;
				verBosque(bosque1);
				cout<<endl<<"Presione enter para comenzar a propagar el fuego...";
			    cin.ignore(); cin.get(); system("cls");
				bosqueFinal[n][n]=bosque1[n][n];
				cout<<"---Bosque 1 después de Quemarse---"<<endl<<endl;
				quemarArbol(bosque1, bosqueFinal);
				verBosque(bosqueFinal);
				Sleep(3500); system("cls");
				break;
			}
			case 2:{
				system("cls");
				cout<<"---Bosque Inicial---"<<endl<<endl;
				verBosque(bosque2);
				cout<<endl<<"Presione enter para comenzar a propagar el fuego...";
			    cin.ignore(); cin.get(); system("cls");
				bosqueFinal[n][n]=bosque2[n][n];
				cout<<"---Bosque 2 después de Quemarse---"<<endl<<endl;
				quemarArbol(bosque2, bosqueFinal);
				verBosque(bosqueFinal);
				Sleep(3500); system("cls");
				break;
			}
			case 3:{
				system("cls");
				cout<<"---Bosque Inicial---"<<endl<<endl;
				verBosque(bosque3);
				cout<<endl<<"Presione enter para comenzar a propagar el fuego...";
			    cin.ignore(); cin.get(); system("cls");
				bosqueFinal[n][n]=bosque3[n][n];
				cout<<"---Bosque 3 después de Quemarse---"<<endl<<endl;
				quemarArbol(bosque3, bosqueFinal);
				verBosque(bosqueFinal);
				Sleep(3500); system("cls");
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