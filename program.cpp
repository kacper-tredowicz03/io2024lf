#include <iostream>
using namespace std;

int silnia(int n){
	int wynik;
	for(int i=1;i<=n;i++){
		wynik=wynik*i;
	}
	return wynik;
}


int main(){
	int liczba;
	cin>>liczba;
	cout<<silnia(liczba)<<"\n";
}
