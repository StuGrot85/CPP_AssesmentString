#include "String.h"
#include <iostream>

String::String()
{
	data = new char[1];
	data[0] = '\0';
}

String::String(const char* _str)
{
	data =  new char [strlen(_str)+1];// assign data to new char to allocate array size and +1 adds null terminator as strlen doesnt do it.
	strcpy_s(data, strlen(_str) + 1, _str);// using the safer version os strcpy allowing buffer - sopies _str into data including null terminator
}

String::String(const String& _other)
{
	data = new char[strlen(_other.data) + 1];// assign data to new char to allocate array size and +1 adds null terminator as strlen doesnt do it.
	strcpy_s(data, strlen(_other.data) + 1, _other.data); //destination (first), Length size of char (middle), source (Last) 
}

String::~String()
{
	delete[] data; //deletes the data array 
}

size_t String::Length() const
{
	return strlen(data); //returns the length of data.
}

String& String::Append(const String& _str)
{
	size_t Length = strlen(data) + strlen(_str.data) + 1; // size_t Length stores buffer size for both strings 
	char* dataArray = new char[Length]; // delcares a point to dataArray to hold the address
	dataArray[0] = '\0'; //makes dataArray as an empty string 
	strcat_s(dataArray, Length, data); //safetly append the data with no buffer overflows
	strcat_s(dataArray, Length, _str.data);

	delete[] data; //deletes the data array 
	data = dataArray;

	return *this;
}

String& String::ToLower()
{
	int i = 0; //index is the value of 0

	char c; //char veriable named c
	while (data[i]) // while loop using data and variable index
	{
		c = data[i]; // c variable adds data and index as 0
		data[i] = tolower(c); //using data pointing to first letter and lower the case 
		i++; // runs through each character

	}
	return *this;

}

String& String::ToUpper() //same as the ToLower function
{
	int i = 0;

	char c;
	while (data[i])
	{
		c = data[i];
		data[i] = toupper(c);
		i++;
	}


	return *this;
}

int String::FindCharacter(const char _chr)
{

	for (int i = 0; i < strlen(data); i++) // using for loop to find the character
	{
		if (data[i] == _chr)
		{
			return i;
		}
	
	}

	return -1;
}

int String::Replace(const char _find, const char _replace)
{	
	char * position = strrchr(data, _find);
	* position = _replace; //overwites the character at the pointer position 


	return position -& data[0]; //calculates the offset of the position relative to the string
}

String& String::ReadFromConsole()
{
	char* c = new char[999]; //allocates character array and set buffer to 999 bytes
	std::cin.getline(c, 999, '\n'); //reads the line of input from the user
	delete[] data; //deletes the data array
	data = c;

	return *this;
}

String& String::WriteToConsole()
{
	std::cout << data << std::endl; //writes the data to the console
	return *this;

}

bool String::operator==(const String& _other)
{
	//check our data = the data of the other string
	//c String strcmp - if return 0 to be equal = true if not false
	int result = strcmp(data, _other.data);
		if (result == 0) 
	{
			return true;
		}
		else
			return false;
}

char& String::operator[](size_t _index)
{
	return data[_index]; // returning data Variable 
}

const char& String::operator[](size_t _index) const
{
	const char& result = data[_index]; //creates a reference to the character
	return result; 
}

String& String::operator=(const String& _str)
{
	strcpy_s(data, strlen(_str.data) + 1, _str.data); // copys the _str.data to data  using strcpy_s
	return *this;
}

bool String::operator<(const String& _str)
{
	int size1 = strlen(data);
	int size2 = strlen(_str.data);

	if (size1 < size2)// if statement to check if the length of the string is less then the other
	{
		return true;
	}
	else
		return false;
}
	


