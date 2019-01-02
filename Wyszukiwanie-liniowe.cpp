 //============================================================================
 // Name        : Wyszukiwanie-liniowe.cpp
 // Author      : Tomasz Wasacz
 // Version     :
 // Copyright   : Your copyright notice
 // Description : Hello World in C++, Ansi-style
 //============================================================================

  #include <iostream>
 #include <cstdlib> //biblioteka potrzebna do wywo³ywania funkcji odpowiedzialnych za pseudolosowosc
 #include <ctime>
 using namespace std;

  bool wyszukiwanie_liniowe(int search_num, int *table, int table_size)
 {
 	int position=0;
 	while(position<=table_size and search_num!=table[position])
 		position++;

  	if(position>table_size) return false;
 	else return true;
 }

  void wyswietl(int *table, int table_size) //funkcja pomocnicza do wyswietlania tablicy;
 {
 	for(int i=0;i<table_size;i++) cout << table[i] << endl;
 }

  int main() {

  	srand(time(NULL)); //niezbêdna do generowania przy ka¿dym wywo³aniu aplikacji ró¿nych liczb losowych
 	int table_size = 40; //Podajemy liczbê tablicy do wygenerowania
 	int *table = new int[table_size];
 	int search_num=0;

  	for (int i=0; i<table_size; i++)
 		table[i]=(rand() % table_size);

  	cout << "Searching number:";cin >> search_num;cout << endl;

  	if(wyszukiwanie_liniowe(search_num, table, table_size))
 		cout << "Znaleziono!" << endl;
 	else
 		cout << "Nieznaleziono!" << endl;


  	return 0;
 }
