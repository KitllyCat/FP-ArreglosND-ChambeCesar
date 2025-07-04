#include <iostream>
#include <windows.h>
using namespace std;

int main(){
    int matriz[5][5]={
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    
    cout<<"Matriz 5x5 original"<<endl<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	Sleep(1000);
    cout<<endl<<"Recorrido en espiral:\n";
    for(int cap=0;cap<(5+1)/2;cap++){
        for(int col=cap;col<5-cap;col++){ //1ra
            cout<<matriz[cap][col]<<" ";
            Sleep(200);
        }
        for(int fila=cap+1;fila<5-cap;fila++){ //2da
            cout<<matriz[fila][5-1-cap]<<" ";
            Sleep(200);
        }
        if(5-1-cap!=cap){
            for (int col=5-2-cap;col>=cap;col--){ //3ra
                cout<<matriz[5-1-cap][col]<<" ";
                Sleep(200);
            }
        }
        if(5-1-cap!=cap){
            for (int fila=5-2-cap;fila>cap;fila--){ //4ta
                cout<<matriz[fila][cap]<<" ";
                Sleep(200);
            }
        }
    }
    cout<<endl;
    return 0;
}