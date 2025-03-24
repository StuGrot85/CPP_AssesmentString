#include "String.h"
#include "iostream"


int main() // added alot of couts to and \n for easier read on the console 
{
	std::cout << "Please type anything you like - followed by the enter key. \n" << std::endl;
	char* c = new char[999];
	std::cin.getline(c, 999, '\n');

	std::cout << '\n' << std::endl;

	std::cout << "Welcome to Klappers Hello World Assessment. \n" << std::endl;

	std::cout << '\n' << std::endl;
	std::cout << '\n' << std::endl;

	std::cout << "Here is simple string function. \n" << std::endl;
	String TextH = String("Hello ");
	String TextW = String("World \n");
	
	TextH.WriteToConsole();
	TextW.WriteToConsole();

	std::cout << '\n' << std::endl;

	std::cout << "This is the read from console function. \n" << std::endl;
	std::cout << TextH[0] <<'\n' << std::endl;

	std::cout << '\n' << std::endl;

	std::cout << "This is the Append function." << '\n' << std::endl;
	TextH.Append(TextW);
	TextH.WriteToConsole();

	std::cout << '\n' << std::endl;

	std::cout << "This is the ToLower function." << '\n' << std::endl;
	TextH.ToLower();
	TextH.WriteToConsole();

	std::cout << '\n' << std::endl;

	std::cout << "This is the ToUpper function." << '\n' << std::endl;
	TextH.ToUpper();
	TextH.WriteToConsole();

	std::cout << '\n' << std::endl;

	std::cout << "This is the Find Character using int function for Hello World (R)." << '\n' << std::endl;
	int position = TextH.FindCharacter('R');
	std::cout << position << '\n' << std::endl;

	std::cout << '\n' << std::endl;

	std::cout << "This is the Replace function L to Z" << '\n' << std::endl;
	int positionReplace = TextH.Replace('L','Z');
	TextH.WriteToConsole();

	std::cout << '\n' << std::endl;
	
	std::cout << "This uses the strcmp function testing if hello and world are are the same (0) = false (1) true" << '\n' << std::endl;
	std::cout << "Hello == World = false and Hello == Hello is true" << '\n' << std::endl;
	bool result1 = TextH == TextW;
	bool result2 = TextH == TextH;

	std::cout << result1 << result2 << '\n' << std::endl;

	std::cout << '\n' << std::endl;

	std::cout << "This uses the strlen function testing if hello world is less length then the other (0) = false (1) true" << '\n' << std::endl;
	bool size1 = TextH < TextW;
	bool size2 = TextW < TextH;

	std::cout << size1 << size2 << '\n' << std::endl;

	std::cout << '\n' << std::endl;


	return 0;





}