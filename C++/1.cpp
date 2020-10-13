#include <iostream> //Magiška biblioteka iš default cpp template

using namespace std; //Čia magiškas dalykas, kad nereiktų prie visų cin ir cout rašyt std:: prieš juos. Irgi iš template.

void FirstTask() //Funcija vykdo žemiau esantį kodą.
{
	int a = 0; //Apsirašom int tipo kintamajį a, priskiriame reikšmę 0;

	cout << "Iveskite pazimi:" << endl; //Į ekraną išvedame tekstą "Iveskite pazimi:";

	cin >> a; //Vartotojas įveda a reikšmę. Reikšmė priskiriama į a kintamajį.

	if (a > 5) //Jeigu vartotojo įvestas skaičius yra didesnis už 5,
		cout << "Islaike" << endl; //Į ekraną išvedamas tekstas "Išlaikė"
	else //Jeigu vartotojo įvestas skaičius yra MAŽESNIS ARBA LYGUS 5,
		cout << "Neislaike" << endl; //Į ekraną išvedamas tekstas "Neišlaikė"
}

int main() //Pasileidus programai, pirmiausia suveikia main funkcija.
{
	FirstTask(); //Kviečia FirstTask funkciją.
}