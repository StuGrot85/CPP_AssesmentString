#include "String.h"
#include <iostream>
#include <string>

String::String()
{
}

String::String(const char* _str, const char* _str2)
{
	data = _str;
	data2 = _str2;
}

String::String(const String& _other)
{
}

String::~String()
{
}

size_t String::Length() const
{
	return size_t();
}

String& String::Append(const String& _str, const String& _str2)
{
	// TODO: insert return statement here
	std::string str;
	std::string str2 = data;
	std::string str3 = data2;

	str.append(data, data2);

	std::cout << str << '\n';
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

int String::FindCharacter(const char _chr)
{
	return 0;
}

int String::Replace(const char _find, const char _replace)
{
	return 0;
}

String& String::ReadFromConsole()
{
	// TODO: insert return statement here
	std::cout << "data" " " "data2" << std::endl;
	return *this;
}

String& String::WriteToConsole()
{
	// TODO: insert return statement here
}

bool String::operator==(const String& _other)
{
	return false;
}

char& String::operator[](size_t _index)
{
	// TODO: insert return statement here
}

const char& String::operator[](size_t _index) const
{

	// TODO: insert return statement here

}

String& String::operator=(const String& _str)
{
	// TODO: insert return statement here
}

bool String::operator<(const String& _str)
{
	return false;
}
