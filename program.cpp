#include <iostream>
using namespace std;
int silnia(int n){
	if(n<0){
		cout<<"liczba powinna byc ujemna";
		return -1;
	}
	int wynik=1;
	for(int i=1;i<=n;i++){
		wynik=wynik*i;
	}
	return wynik;
}
	
int main(){
	int liczba;
	cin>>liczba;
	if(wynik!=-1)
		cout<<silnia(liczba);
}
