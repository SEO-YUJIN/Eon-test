#pragma once

class Book
{
private:
	char* bookName; //책이름
	char* Author;   //작가
	int Year;       //출판연도
	char* Publisher;  //출판사명
	char* Genre;      //장르

public:
	Book(char* name, char* author, int year, char* publisher, char* genre); //생성자 함수
	char* getBOOKNAME();
	char* getAUTHOR();
	int getYEAR();
	char* getPUBLISHER();
	char* getGENRE();
	~Book();
};
