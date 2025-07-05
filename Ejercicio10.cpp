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
	int cantM;
	
	int tableroE[n][n];	
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int cantM=0;
            for(int vi=-1;vi<=1;vi++){
                for(int vj=-1;vj<=1;vj++){
                    if(vi==0 && vj==0){
					continue;
					}
                    int ni=i+vi;
                    int nj=j+vj;

                    if(ni>=0 && ni<n && nj>=0 && nj<n){
                        if(tableroM[ni][nj]==1){
                            cantM++;
                        }
                    }
                }
            }
            tableroE[i][j]=cantM;
        }
    }
    
    cout<<"---Simulacion de un tablero de buscaminas---"<<endl<<endl;
	cout<<"-----Tablero buscaminas original-----"<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<tableroM[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"-----Tablero buscaminas marcado-----"<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<tableroE[i][j]<<" ";
			Sleep(75);
		}
		cout<<endl;
	}
	
    return 0;
}
