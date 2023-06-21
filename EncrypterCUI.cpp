#include <iostream>
#include <fstream>

unsigned short encrypter(char letra)
{
	switch (letra)
	{
	case 'a':
		return 1;
	case 'b':
		return 2;
	case 'c':
		return 3;
	case 'd':
		return 4;
	case 'e':
		return 5;
	case 'f':
		return 6;
	case 'g':
		return 7;
	case 'h':
		return 8;
	case 'i':
		return 9;
	case 'j':
		return 10;
	case 'k':
		return 11;
	case 'l':
		return 12;
	case 'm':
		return 13;
	case 'n':
		return 14;
	case 'ñ':
		return 15;
	case 'o':
		return 16;
	case 'p':
		return 17;
	case 'q':
		return 18;
	case 'r':
		return 19;
	case 's':
		return 20;
	case 't':
		return 21;
	case 'u':
		return 22;
	case 'v':
		return 23;
	case 'w':
		return 24;
	case 'x':
		return 25;
	case 'y':
		return 26;
	case 'z':
		return 27;

	}
}

char x;
int main() 
{
	std::cin >> x;
	std::ofstream MyFile("filename.txt");
	MyFile << "Files can be tricky, but it is fun enough!";
	MyFile.close();
	std::cout << encrypter(x);
}
