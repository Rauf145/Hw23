#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>

using namespace std;

//1
//void change(char* text);
//
//void Function(char* text)
//{
//	cin.getline(text, 255);
//	change(text);
//	cout << text << endl;
//}
//
//void change(char* text)
//{
//	int index = 0;
//	while (text[index] != '\0')
//	{
//		if (text[index] == ' ')
//			text[index] = '\t';
//		index++;
//	}
//}

//2
//void counter(char* text, int &count);
//
//void Function(char* text)
//{
//	int count = 0;
//	cin.getline(text, 255);
//	counter(text, count);
//	cout << count;
//}
//
//void counter(char* text, int &count)
//{
//	for (int i = 0; i < 255; i++)
//	{
//		if (text[i] == ' ' || text[i] == '.' || text[i] == '?' || text[i] == '!')
//			count++;
//	}
//}

//7
int mystrlen(char *&text);

void Function(char* text1, char* text2)
{
	int key;
	cin.getline(text1, 255);
	cin.getline(text2, 255);
	key = getch();
	if (key == 'c' || key == 'C')
	{

	}
}

int mystrlen(char *&text)
{
	int index = 0, count = 0;
	while (text[index++] != '\0')
		count++;
	return count;
}