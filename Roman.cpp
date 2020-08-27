//This code in c++

#include<iostream>

#include<string>

using namespace std;

class romanType

{

private:

string roman;

long int integer;

public:

void enterRoman() {

cout<<"Enter Roman Number: ";

}

void storeRoman(string &roman) {

cin >> roman;

this->roman = roman;

}

// This function returns value of a Roman symbol

int value(char r)

{

if (r == 'I')

return 1;

if (r == 'V')

return 5;

if (r == 'X')

return 10;

if (r == 'L')

return 50;

if (r == 'C')

return 100;

if (r == 'D')

return 500;

if (r == 'M')

return 1000;

return -1;

}

void convertToDecimal() {

// Initialize result

long int res = 0;

for (int i = 0; i<roman.length(); i++)

{

// Getting value of symbol s[i]

int s1 = value(roman.at(i));

// Getting value of symbol s[i+1]

if ((i + 1) <roman.length())

{

int s2 = value(roman.at(i+1));

// Comparing both values

if (s1 >= s2)

{

// Value of current symbol is greater

// or equalto the next symbol

res = res + s1;

}

else

{

res = res + s2 - s1;

i++; // Value of current symbol is

// less than the next symbol

}

}

else

{

res = res + s1;

i++;

}

}

this->integer = res;

}

void printRoman() {

cout << roman << endl;

}

void printDecimal() {

cout << integer << endl;

}

};

int main()

{

string roman = "";

romanType newRoman;

newRoman.enterRoman();

newRoman.storeRoman(roman);

newRoman.convertToDecimal();

cout<<"Which would you like to print: \n";

cout<<"1. Roman\n";

cout<<"2. Decimal\n";

int choice;

cin >> choice;

if (choice == 1)

newRoman.printRoman();

else

newRoman.printDecimal();

//to hold the screen

system("pause");

return 0;

}

//output