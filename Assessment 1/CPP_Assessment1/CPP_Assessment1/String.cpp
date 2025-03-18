#include "String.h"
#include <iostream>

String::String()
{
	
	
	//'\0'//nulltermintor
}

String::String(const char* _str)
{
	data =  new char [strlen(_str)+1];
	strcpy_s(data, strlen(_str) + 1, _str);
}

String::String(const String& _other)
{
}

String::~String()
{
}

size_t String::Length() const
{
	return strlen(data);
}

String& String::Append(const String& _str)
{
	char data[15];
	char* strcat(char* destination, const char* source);

	/// - recreate data variable large enough to store both strings 
	///use  c string strcat function append the data of this string and the other string and store it in the data variable
	// TODO: insert return statement here

	return *this;
}

String& String::ToLower()
{
	// TODO: insert return statement here
	int i = 0;
	char data[] = "Hello\n";
	char c;
	while (data[i])
	{
		c = data[i];
		putchar(tolower(c));
		i++;
	}

	return *this;

}

String& String::ToUpper()
{
	// TODO: insert return statement here
	int i = 0;
	char data[] = "world\n";
	char c;
	while (data[i])
	{
		c = data[i];
		putchar(toupper(c));
		i++;
	}
	return *this;
}

//int String::FindCharacter(const char _chr)
//{
// 
// strrchr function
// or either use loop _char or nullterminator
//	return 0;
//}
//
//int String::Replace(const char _find, const char _replace)
//{
// strrchr -returns the pointer and switches it out in place
// 
//	return 0;
//}
//
String& String::ReadFromConsole()
{
	// TODO: insert return statement here

	//>> cin - data variable
	std::cin >> data;

	return *this;
}

String& String::WriteToConsole()
{
	// TODO: insert return statement here
	std::cout << data << std::endl;
	return *this;

}
//
//bool String::operator==(const String& _other)
//{
// check our data = the data of the other string
// c String strcmp - if return 0 to be equal = true if not false
// 
//	return false;
//}
//
//char& String::operator[](size_t _index)
//{
// return data char [] index   ---- (maybe) de reference  the vriable - *C 
//	// TODO: insert return statement here
//}
//
//const char& String::operator[](size_t _index) const
//{
// return data char [] index   ---- de reference  the vriable - *C 
//	// TODO: insert return statement here
//}
//
//String& String::operator=(const String& _str)
//{
//	// TODO: insert return statement here
//  empty data -  do same as contstructor
//}
//
//bool String::operator<(const String& _str)
//{
// 
// one string less then the other - compare the result  using boolean strmp
//	return false;
//}
