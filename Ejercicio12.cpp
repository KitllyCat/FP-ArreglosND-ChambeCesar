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
    int tableroG1[n][n];
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		tableroG1[i][j]=rand()%2;
		}
	}
	
    cout<<"El tablero inicial es el siguiente: "<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<tableroG1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"Presione enter para comenzar con el juego y ver la siguiente generacion:";
	cin.get(); system("cls");
	
	int tableroG2[n][n];
	//funcion para calcular la siguiente generacion
	for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		int vivos=0; //cantVivos
    		for(int vx=-1;vx<=1;vx++){
	            for(int vy=-1;vy<=1;vy++){
	                if(vx==0 && vy==0){
					continue;
					}
	                int ni=i+vx;
	                int nj=j+vy;
	                if(ni>=0 && ni<n && nj>=0 && nj<n){
	                    if(tableroG1[ni][nj]==1){
	                        vivos++;
	                    }
	                }
            	}
        	}
        	if(tableroG1[i][j]==1){ //vivo
            	if(vivos<2 || vivos>3){
                	tableroG2[i][j]=0; //muere
            	}else{
                	tableroG2[i][j]=1; //sobrevive
            }
        	}else{ //espacio vacio
	            if(vivos==3){
	                tableroG2[i][j]=1; //revive
	            }else{
	                tableroG2[i][j]=0; //aún muere
	            }
			}
		}
	}

	cout<<"---Simulacion del Juego de la Vida de Conway---"<<endl<<endl;
	cout<<" Tablero inicial\t\tSiguiente generacion"<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<""<<tableroG1[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<n;j++){
			cout<<""<<tableroG2[i][j]<<" ";
		}
		cout<<endl;
	}	
    return 0;
}
