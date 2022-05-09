#define _CRT_SECURE_NO_WARNINGS
#include "Book.h"
#include <iostream>
#include <cstring>
using namespace std;

Book::Book(char* name, char* author, int year, char* publisher, char* genre)
	: bookName(name), Author(author), Year(year), Publisher(publisher), Genre(genre)
{
	int len = strlen(name) + 1;
	name = new char[len];
	strcpy_s(bookName, len, name);

	int len2 = strlen(author) + 1;
	name = new char[len2];
	strcpy_s(Author, len2, author);

	int len3 = strlen(publisher) + 1;
	name = new char[len3];
	strcpy_s(Publisher, len3, publisher);

	int len4 = strlen(genre) + 1;
	name = new char[len4];
	strcpy_s(Genre, len4, genre);
}

char* Book::getBOOKNAME()
{
	return bookName;
}

char* Book::getAUTHOR()
{
	return Author;
}

int Book::getYEAR()
{
	return Year;
}

char* Book::getPUBLISHER()
{
	return Publisher;
}

char* Book::getGENRE()
{
	return Genre;
}

Book::~Book()
{
	delete[]bookName;
	delete[]Author;
	delete[]Publisher;
	delete[]Genre;
}
//Year은 동적할당을 한것이 아니여서 안쓴다.
