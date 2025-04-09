#define _CRT_SECURE_NO_WARNINGS //use it to get rid of the ctime warning so I could use the function
#include "String.h"
#include "iostream"
#include <fstream>
#include <ctime>


int main() // added alot of couts to and \n for easier read on the console 

{
	std::fstream file;//namespace
	file.open("TestLog", std::ios::out | std::ios::app); // opens log file

	if (!file.is_open()) // if statement if not open tell me in console
	{
		std::cout << "File did not open";
	}

	// add code here to implement tests for each function 

	//Date: 5/02/2015 Time: 13:48:00 Successful 50.00% 
	// Test 0 Length Successful
	//	Test 1 CharAt Successful
	//	Test 2 EqualTo Failed
	//	Test 3 Append Failed

	//	Date : 6 / 02 / 2015 Time : 12 : 27 : 00 Successful 75.00 %
	//	Test 0 Length Successful
	//	Test 1 CharAt Successful
	//	Test 2 EqualTo Successful
	//	Test 3 Append Failed

	//getdata no need to test

	time_t rawtime;
	time(&rawtime);

	file << std::endl << std::endl;

	// Testing Sring Length
	String Test0 = String("Test 0");// testing length of string

	if (Test0.Length() == 6)
	{
		file << "Test 0 - Length" << " = " << "Successful";
	}
	else
		file << "Test 0 - Length" << " = " << "Fail";

	file << std::endl << std::endl;// Line break

	// Testing Append Function
	String Test1 = String("Cheese");
	String string2 = String("Burger");
	String Answer1 = String("CheeseBurger");

	Test1.Append(string2);

	if (Test1 == Answer1)
	{
		file << "Test 1 - Append" << " = " << "Successful";
	}
	else
		file << "Test 1 - Append" << " = " << "Fail";

	file << std::endl << std::endl;// Line break

	//Testing ToLower Function
	String Test2 = String("pickles");

	if (Test2.ToLower() == "pickles")
	{
		file << "Test 2 - ToLower" << " = " << "Successful";
	}
	else
		file << "Test 2 - ToLower" << " = " << "Fail";

	file << std::endl << std::endl; // Line break

	// Testing ToUpper Function
	String Test3 = String("LETTUCE");

	if (Test3.ToUpper() == "LETTUCE")
	{
		file << "Test 3 - ToUpper" << " = " << "Successful";
	}
	else
		file << "Test 3 - ToUpper" << " = " << "Fail";

	file << std::endl << std::endl;

	//Testing to FindCharacter Function
	String Test4 = String("Tomato");
	if (Test4.FindCharacter('a') >= 0 &&
		Test4.FindCharacter('p') < 0)
	{
		file << "Test 4 - FindCharacter" << " = " << "Successful";
	}
	else
		file << "Test 4 - FindCharacter" << " = " << "Fail";

	file << std::endl << std::endl;

	file.close(); //close file




	std::cout << "Please type your name. \n" << std::endl;
	char* c = new char[999];
	std::cin.getline(c, 999, '\n');

	std::cout << '\n' << std::endl;

	std::cout << "Welcome to Hello World Assessment " << c << "." "\n";

	std::cout << '\n' << std::endl;
	std::cout << "The first letter of your name is " << c[0] << '\n';
	std::cout << '\n' << std::endl;

	std::cout << "Here is simple string function using hello world. \n" << std::endl;
	String TextH = String("Hello ");
	String TextW = String("World \n");
	String TextA = String("");

	TextH.WriteToConsole();
	TextW.WriteToConsole();

	std::cout << '\n' << std::endl;

	std::cout << "This is the read from console function, type any word. \n" << std::endl;
	TextA.ReadFromConsole();
	String TextB = String(TextA);//temporary variable

	std::cout << '\n' << std::endl;

	std::cout << "This is the Append function using the user word." << '\n' << std::endl;
	TextB.Append(TextW);
	TextB.WriteToConsole();

	std::cout << '\n' << std::endl;

	std::cout << "This is the ToLower function." << '\n' << std::endl;
	TextA.ToLower();
	TextW.ToLower();
	TextA.WriteToConsole();
	TextW.WriteToConsole();

	std::cout << '\n' << std::endl;

	std::cout << "This is the ToUpper function." << '\n' << std::endl;
	TextA.ToUpper();
	TextW.ToUpper();
	TextA.WriteToConsole();
	TextW.WriteToConsole();

	std::cout << '\n' << std::endl;

	std::cout << "This is the Find Character function for (R) in ";
	TextW.WriteToConsole();
	int position = TextW.FindCharacter('R');
	std::cout << position << '\n' << std::endl;

	std::cout << '\n' << std::endl;

	std::cout << "This is the Replace function L to Z" << '\n' << std::endl;
	int positionReplace = TextW.Replace('L', 'Z');
	TextW.WriteToConsole();

	std::cout << '\n' << std::endl;

	std::cout << "This uses the strcmp function testing if " << TextA.getdata() << " and " << TextW.getdata() << "  are are the same (0) = false, (1) = true" << '\n' << std::endl;
	std::cout << "Is users word less than world " << '\n' << std::endl;
	bool result1 = TextA == TextW;
	std::cout << result1 << '\n' << std::endl;
	std::cout << '\n' << std::endl;
	std::cout << "Is users word the same as the user word? " << '\n' << std::endl;
	bool result2 = TextA == TextA;
	std::cout << result2 << '\n' << std::endl;

	std::cout << '\n' << std::endl;

	std::cout << "This uses the strlen function testing if " << TextA.getdata() << " and " << TextW.getdata() << " is less length than the other (0) = false (1) true" << '\n' << std::endl;
	std::cout << "Is users word less than the word world? " << '\n' << std::endl;
	bool size1 = TextA < TextW;
	std::cout << size1 << '\n' << std::endl;
	std::cout << '\n' << std::endl;



	std::cout << '\n' << std::endl;


	return 0;

}