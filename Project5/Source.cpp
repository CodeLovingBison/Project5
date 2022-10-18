#include<iostream>
#include<string.h>
#include<conio.h>
#include<cstdio>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	//srand(time(NULL));
	char choice = '5';
	const int size = 200;
	char sizeTest[size];
	char textStr[size];
	int numbCount = 0;
	int letterCount = 0;
	int glasnCount = 0;
	int soglasnCount = 0;
	int strocCount = 1;
	int symbolCount = 0;
	char glasn[10]{ 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' };
	//cout << "\n==============================\n [ Enter (a): ";
	FILE* fileCompare1, * fileCompare2;
	/*string fileReadName = "fileRead.txt";
	string fileWriteName = "fileWrite.txt";*/
	int i = 0;
	if ((fopen_s(&fileCompare1, "fileCompare1.txt", "r") == NULL) && (fopen_s(&fileCompare2, "fileCompare2.txt", "r") == NULL)) {
		printf(" [ Both files were opened!\n");
		fgets(textStr, size, fileCompare1);
		while (!feof(fileCompare1)) {
			symbolCount++;
			if (isdigit(textStr[i])) {
				numbCount++;
			}
			else if (isalpha(textStr[i])) {
				letterCount++;
				for (int j = 0; j < 10; j++) {
					if (glasn[j] == textStr[i]) {
						glasnCount++;
						break;
					}
					else if ('\n' == textStr[i]) {
						soglasnCount++;
						break;
					}
				}
			}
			else if (textStr[i] == '\n') {
				strocCount++;
			}
			i++;
		}

	}
	cout << endl << strocCount << endl << symbolCount << endl << letterCount << endl << soglasnCount << endl << glasnCount << endl << numbCount;
	//_itoa(strocCount, str_buffer, 10);
	//strcat_s(str_buffer, "count of lines\n");
	//fputs(str_buffer, fileWrite);
	//printf("%s", sizeTest);
	/*while (!feof(fileRead)) {

	}*/
	/*else {
		if (fopen_s(&fileWrite, "fileRead.txt", "w") != NULL) {
			printf("file wasn't opened\n");
			while (!feof(fileRead)) {
				fgets(textStr, size, fileRead);
				while (i < size) {
					if (isdigit(textStr[i])) {
						numbCount++;
					}
					if (isalpha(textStr[i])) {
						letterCount++;
					}
					else {
						ectCount++;
					}
					i++;
				}
			}
		}
		else {
			char buf[100];
			if (fgets(buf, 100, fileRead) != NULL)
				fputs(buf, fileWrite);
			fclose(fileWrite);
		}
		fclose(fileRead);
	}
	//printf(" [ Text.", "%-50s");
	//cout << " [ ¬ведите чеслитель первой дроби: ";
	/*









	int i = 0;
	char text[size];
	puts("[  Enter anything and i will count all Lumbers, Letters and Other Symbols!\n[  Enter Here: ");
	gets_s(text);
	while (text[i] != '\0') {
		if (isdigit(text[i])) {
			numbCount++;
		}
		else if (isalpha(text[i])) {
			letterCount++;
		}
		else {
			ectCount++;
		}
		i++;
	}
	cout << "====================\n [ Numbers:  " << numbCount << "\n====================\n [ Letters:  " << letterCount << "\n====================\n [ Other Symbols  " << ectCount << "\n====================\n";
}






		FILE* file;
		errno_t err;
		if (err = fopen_s(&file, "file.txt", "r") != NULL) {
			printf("Error\n");
		}
		else {
			printf("feelin' good!");
		}
		if (fclose(file)) {
			printf("file wasnt closed");
		}
		else {
			fprintf(file, "%s", "today is ");
		}
		if (_fcloseall() == EOF) {
			printf("error\n");
			printf("done!\n");
		}
*/

}
