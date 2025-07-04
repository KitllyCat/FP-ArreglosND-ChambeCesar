#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int matriz[4][4]={
		{1,2,3,4},
        {5,6,7,8},
        {9,1,2,3},
        {4,5,6,7}
    };
	
	cout<<"Matriz 4x4 original"<<endl<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	int matrizAlt[4][4];
	
    for(int i=0;i<4;i++){
        for(int j=0; j<4;j++){
            matrizAlt[j][4-1-i]=matriz[i][j];
        }
    }
    
    cout<<endl<<"Matriz 4x4 rotada en sentido horario"<<endl<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<matrizAlt[i][j]<<" ";
		}
		cout<<endl;
	}
    
	return 0;
}