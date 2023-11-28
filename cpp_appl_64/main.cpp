#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
    system("chcp 1251");
    system("cls");
    char inputPath[] = "input.txt";
    char outputPath[] = "output.txt";
    char buffer[1000];

    FILE* inputFile = fopen(inputPath, "r");
    FILE* outputFile = fopen(outputPath, "w");

    if (inputFile == NULL || outputFile == NULL) {
        perror("log");
        return 1;
    }
    else {
        while (fgets(buffer, 999, inputFile)) {
            fputs(buffer, outputFile);
        }
        fclose(inputFile);
        fclose(outputFile);
    }

    cout << "Операція завершена успішно." << endl;

    return 0;
}
