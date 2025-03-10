#include "String.h"

String::String()
{
}

String::String(const char* _str)
{
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

String& String::Append(const String& _str)
{
	String hello("Hello");
	String space(" ");
	String world("World");

}

String& String::ToLower()
{
	// TODO: insert return statement here
}

String& String::ToUpper()
{
	// TODO: insert return statement here
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
