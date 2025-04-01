#include "String.h"
#include "iostream"


int main() // added alot of couts to and \n for easier read on the console 
{
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
	int positionReplace = TextW.Replace('L','Z');
	TextW.WriteToConsole();

	std::cout << '\n' << std::endl;
	
	std::cout << "This uses the strcmp function testing if "<< TextA.getdata() << " and "<< TextW.getdata() << "  are are the same (0) = false, (1) = true" << '\n' << std::endl;
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