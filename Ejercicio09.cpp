#include <iostream>
#include <windows.h>

using namespace std;

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	cout<<"Ingrese el 'n' número de orden: ";
	cin>>n;
	
    int matriz[n][n];
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		matriz[i][j]=(j-i+n)%n+1;
		}
	}
    
    cout<<endl<<"Matriz "<<n<<"x"<<n<<" latino"<<endl<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}