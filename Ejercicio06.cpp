#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int matriz[6][6]={
	{0,1,2,3,4,5},
	{6,7,8,9,0,1},
	{2,3,4,5,6,7},
	{8,9,0,1,2,3},
	{4,5,6,7,8,9},
	{0,1,2,3,4,5}
	};
	
	int matrizAlt[6][6];
    
    for(int i=0;i<6;i++){
        for (int j=0;j<6;j++){
            matrizAlt[i][j]=matriz[i][5-j];
        }
    }

	cout<<"Matriz 6x6\t\tMatriz 6x6 invertida"<<endl<<endl;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<6;j++){
			cout<<matrizAlt[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}