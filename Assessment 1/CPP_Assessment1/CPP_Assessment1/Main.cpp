#include "String.h"



int main() 
{
	String TextH("Hello");
	String TextW("World");

	TextH.WriteToConsole();
	TextW.WriteToConsole();

	TextH.Append(TextW);


	return 0;
}