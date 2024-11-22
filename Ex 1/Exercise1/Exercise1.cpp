// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This is the list of excercises in order of the Book programing principles it is implemented a menu to select the excersie
// everything its written on hungary notation

/*
* Variables
Enteros: n (e.g., nCount)
Flotantes: f (e.g., fPrice)
Dobles: d (e.g., dTotal)
Caracteres: c (e.g., cGrade)
Cadenas: sz (e.g., szName)
Booleanos: b (e.g., bIsValid)

Punteros
Puntero a entero: pn (e.g., pnCount)
Puntero a flotante: pf (e.g., pfPrice)
Puntero a doble: pd (e.g., pdTotal)
Puntero a carácter: pc (e.g., pcGrade)
Puntero a cadena: psz (e.g., pszName)

Clases y Estructuras
Clases: C (e.g., CEmployee)
Estructuras: S (e.g., SPoint)

Funciones
Funciones que devuelven enteros: n (e.g., nGetCount())
Funciones que devuelven flotantes: f (e.g., fCalculatePrice())
Funciones que devuelven dobles: d (e.g., dComputeTotal())
Funciones que devuelven booleanos: b (e.g., bIsValid())
Funciones que devuelven void: v (e.g., vInitialize(), vPrintMessage())

Tipos
Enumeraciones: e (e.g., eColor)
Estructuras: st (e.g., stPoint)
Uniones: u (e.g., uData)
*/

#include "std_lib_facilities.h"//using include for the first time to bring the standard input output library

void vHelloW();
void vHelloW2();
void vWriteOnScreen1();
void vWriteVariables();
void vOperatorsex1();
void vRepeatedWords();
void vTypeConvertion();


int main()
{
	vTypeConvertion();
	return 0;
}

void vHelloW()
{
	//First Drill, hello world
	std::cout << "Hello World!\n"; //usign the librery of input and output
	
	keep_window_open(); // wait for Character

}

void vHelloW2()
{
	//First Excersise
	std::cout << "Hello, programming!\n";
	std::cout << "Here we go!\n";
	keep_window_open(); // wait for Character
}

/*Write instructions of how to go from my studio to the bath room.
	From your current position turn right and walk a few steps to see the door, turn left, if its closed open it and move on, if not continue one step outside, 
	turn left, there is another door, if its closed open it and walk 2 steps into the room, turn right walt till you see the white door on your rigth, then turn right and
	open the door if its not open already, thats the bathroom.
*/

void vWriteOnScreen1()
{
	cout << "Please enter your first name (followed by 'enter'):\n";
	string sFirstName;	// sFirstName is a variable of type string
	cin >> sFirstName; 	 // read characters into sFirstName
	cout << "Hello, " << sFirstName << "!\n";
}

void vWriteVariables()
{
	cout << "Please enter your first name and age\n";
	string sFirstName = "Empty";
	int age = 0;
	// string variable
	// (“ ? ? ? ” means “don’t know the name”)
		// integer variable (0 means “don’t know the age”)
		cin >> sFirstName >> age;
	// read a string followed by an integer
	cout << "Hello, " << sFirstName << " (age " << age*12 << ")\n";
}

void vOperatorsex1()
{
	cout << "Please enter a floating-point value: ";
	double dNumber;
	cin >> dNumber;
	cout << "n == " << dNumber
		<< "\nn+1 == " << dNumber + 1
		<< "\nthree times n == " << 3 * dNumber
		<< "\ntwice n == " << dNumber + dNumber
		<< "\nn squared == " << dNumber * dNumber
		<< "\nhalf of n == " << dNumber / 2
		<< "\nsquare root of n == " << sqrt(dNumber)
		<< '\n';	// name for newline (“end of line”) in output
}

void vRepeatedWords()
{
	string sPrevious = " ";
	string sCurrent;
	// previous word; initialized to “not a word”
	 // current word
	while (cin >> sCurrent) {
		if (sPrevious == sCurrent)
			// read a stream of words
			 // check if the word is the same as last
			cout << "repeated word: " << sCurrent << '\n';
		sPrevious = sCurrent;
	}
}

void vTypeConvertion()
{
	double d = 0;
	while (cin >> d) {
		int i = d;
		char c = i;
		int i2 = c;
		// repeat the statements below
		// as long as we type in numbers
			// try to squeeze a double into an int
			// try to squeeze an int into a char
			// get the integer value of the character
			cout << "d==" << d
			<< " i==" << i
			<< " i2==" << i2
			<< " char(" << c << ")\n";
	}
}

