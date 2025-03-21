#include "String.h"



int main() 
{
	String TextH = String("Hello ");
	String TextW = String("World");
	

	TextH.WriteToConsole();
	TextW.WriteToConsole();


	TextH.Append(TextW);


	TextH.WriteToConsole();


	return 0;
}