#include <iostream>
using namespace std;
bool czy_ujemna(int liczba){
	if(liczba<0){
		return 0;		
	}
	return 1;
}
int main(){
	int liczba;
	cin>>liczba;
	if(czy_ujemna(liczba)){
		cout<<liczba;
	}
	else{
		cout<<"Liczba powinna byc nieujemna"<<endl;
	}
}
