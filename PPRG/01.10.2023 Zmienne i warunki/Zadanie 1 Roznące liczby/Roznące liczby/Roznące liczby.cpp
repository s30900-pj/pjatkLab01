#include <iostream>
using namespace std;
int main()
{
	cout << "O programie: Program prosi o podanie pieciu liczb. O kazda z nich pyta oddzielnie. \nProgram przerywa dzialanie z odpowiednim komunikatem, jezeli kolejna liczba nie jest wieksza od poprzedniej!\n"<<endl;
	
	int l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0; // Program nadaje typ zmiennej int dla 5 liczb
	cout << "Podaj perwsza liczbe ";
	cin >> l1; //Program zczytuje liczby
	cout << "\nPodaj druga liczbe ";
	cin >> l2;
	if (l1 >= l2) { //Program sprawdza czy liczba jest mniejsza
		cout << "\nLiczba nie jest wieksza od poprzedniej" << endl; //Program nadaje komunikat
	}
	else {
		cout << "\nPodaj trzecia liczbe ";
		cin >> l3;
		if (l2 >= l3) {
			cout << "\nLiczba nie jest wieksza od poprzedniej" << endl;
		}
		else {
			cout << "\nPodaj czwarta liczbe ";
			cin >> l4;
			if (l3 >= l4) {
				cout << "\nLiczba nie jest wieksza od poprzedniej" << endl;
			}
			else {
				cout << "\nPodaj piata liczbe ";
				cin >> l5;
				if (l4 >= l5) {
					cout << "\nLiczba nie jest wieksza od poprzedniej" << endl;
				}
			}
		}
	}
	return 0;
}


///////////////////////////////////////////////pierwsza wersja kodu///////////////////////////////////////////////////////////////////////////////////
/*int l1 = 0, l2 = 0, l3 = 0, l4 = 0, l5 = 0;
cout << "Podaj perwsza liczbe ";
cin >> l1;
cout << "\nPodaj druga liczbe ";
cin >> l2;
if (l1 > l2) {
	cout << "\nliczba nie jest wieksza od poprzedniej" << endl;
	return 0;
}
cout << "\nPodaj trzecia liczbe ";
cin >> l3;
if (l2 > l3) {
	cout << "\nliczba nie jest wieksza od poprzedniej" << endl;
	return 0;
}
cout << "\nPodaj czwarta liczbe ";
cin >> l4;
if (l3 > l4) {
	cout << "\nliczba nie jest wieksza od poprzedniej" << endl;
	return 0;
}
cout << "\nPodaj piata liczbe ";
cin >> l5;
if (l4 > l5) {
	cout << "\nLiczba nie jest wieksza od poprzedniej"<< endl;
	return 0;
}
return 0;*/