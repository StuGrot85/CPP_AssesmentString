#pragma once

class String
{
public:
	String();
	String(const char* _str, const char* _str2);

	String(const String& _other);

	~String();

public:
	size_t Length() const;
	String& Append(const String& _str, const String& _str2);

	String& ToLower();
	String& ToUpper();

	int FindCharacter(const char _chr);

	int Replace(const char _find, const char _replace);

	String& ReadFromConsole();
	String& WriteToConsole();

	bool operator==(const String& _other);

	char& operator[](size_t _index);
	const char& operator[](size_t _index) const;

	String& operator=(const String& _str);
	bool operator<(const String& _str);

private:
	/*
	* Put your internal data structures and members here
	*/
	const char* data = "Hello";
	const char* data2 = "World";



};
