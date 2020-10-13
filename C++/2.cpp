#include <iostream> //Magiška biblioteka iš default cpp template

using namespace std; //Čia magiškas dalykas, kad nereiktų prie visų cin ir cout rašyt std:: prieš juos. Irgi iš template.

void SecondTask() //Funcija vykdo žemiau esantį kodą.
{
	int a = 0, b = 0, c = 0; //Apsirašom int tipo kintamuosius: a, b, c priskiriame reikšmes 0;

	cout << "Iveskite 3 skaicius:" << endl; //Į ekraną išvedame tekstą "Iveskite 3 skaicius:";

	cin >> a >> b >> c; //Vartotojas įveda a, b, c reikšmes. Reikšmės priskiriama į atitinkamus kintamuosius.

	int biggest = 0;  //Apsirašom int tipo kintamajį biggest priskiriame reikšmę 0;
	bool error = false; //Susikuriame boolean tipo kintamąjį error;

	if (a > b && a > c) //Jeigu a reikšmė bus didesnė už b ir c reikšmes,
		biggest = a; //tai į biggest kintamajį priskirsime a reikšmę.
	else if (b > a && b > c) //Jeigu b reikšmė bus didesnė už a ir c reikšmes,
		biggest = b; //tai į biggest kintamajį priskirsime b reikšmę.
	else if (c > a && c > b) //Jeigu c reikšmė bus didesnė už a ir b reikšmes,
		biggest = c; //tai į biggest kintamajį priskirsime c reikšmę.
	else //Kitu atveju error kintamajam priskirsime true reikšmę, ir į ekraną išvesime tekstą "Klaida";
	{ 
		error = true; 
		cout << "Klaida." << endl; 
	} 

	if (!error) //Jeigu nesuveikė praeitam if blocke else reikšmė, tai išvedam tekstą "Didžiausias:" į ekraną ir biggest reikšmę..
		cout << "Didziausias: " << biggest << endl; 
}

int main() //Pasileidus programai, pirmiausia suveikia main funkcija.
{
	SecondTask(); //Kviečia FirstTask funkciją.
}