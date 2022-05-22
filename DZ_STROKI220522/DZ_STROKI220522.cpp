#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

//1. Написать программу, подсчитывающую количество слов, а также гласных и согласных букв в строке, введённой пользователем.Дополнительно выводить количество знаков пунктуации, цифр и других символов.Учесть, что между словами(а также до и после слов) может быть более одного пробела!Текст строки должен быть на английском языке.Пример вывода программы :
//Всего символов в строке текста – 38, из них :
//Слов – 6
//Гласных букв - 12
//Согласных букв - 21
//Знаков пунктуации - 2
//Цифр – 0
//Других символов – 3

int main()
{
    //setlocale(LC_ALL, "RUS");
    //char* string = new char[500]; 
    //cout << "Please, enter your string: ";
    //gets_s(string, 499); // ввод строки с клавиатуры с учётом пробелов
    ////cout << string << "\n";
    //cout << "Всего символов в строке текста – " << strlen(string) << ", из них : " << "\n";
    //int slov, flag;
    //slov = 0;
    //flag = 0;
    //for (int i = 0; string[i] != '\0'; i++)
    //    if (string[i] != ' ' && flag == 0)
    //     {
    //     slov += 1;
    //     flag = 1;
    //     }
    //    else 
    //        if (string[i] == ' ') flag = 0;
    //cout << " Слов – " << slov << "\n";
    //int z=0;// цифры
    //int punc = 0;
    //int gl = 0;
    //int sogl = 0;
    //int dr = 0;
    //for (int i = 0; i < strlen(string); i++)
    //{
    //    if (string[i] > 47 && string[i] < 58)  z++;
    //    else if (string[i] == 33 || string[i] == 34 || string[i] == 44 || string[i] == 45
    //        || string[i] == 46 || string[i] == 58 || string[i] == 59 || string[i] == 63)punc++;
    //    else if ((string[i] > 65 && string[i] < 91) && (string[i] != 69) && (string[i] != 73) && (string[i] != 79) && (string[i] != 85) ||
    //        (string[i] > 97 && string[i] < 123) && (string[i] != 101) && (string[i] != 105) && (string[i] != 111) && (string[i] != 117)) sogl++;
    //    else if (string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 || string[i] == 65 || string[i] == 97 || string[i] == 101 ||
    //        string[i] == 105 || string[i] == 111 || string[i] == 117) gl++;
    //    else dr++;
    //}

    //cout << " Согласных букв - " << sogl << "\n";
    //cout << " Гласных букв - " << gl << "\n";
    //cout << " Знаков пунктуации: " << punc << "\n";
    //cout << " Цифр: " << z << "\n";
    //cout << " Других символов –" << dr << "\n";

    //delete[] string;

    //2.Подсчитать среднюю длину слова во введённом предложении.
    //setlocale(LC_ALL, "RUS");
    //char* string = new char[500]; 
    //cout << "Please, enter your string: ";
    //gets_s(string, 499); // ввод строки с клавиатуры с учётом пробелов
    //int slov, flag, probel;
    //slov = 0;
    //flag = 0;
    //probel = 0;
    //for (int i = 0; string[i] != '\0'; i++)
    //    if (string[i] != ' ' && flag == 0)
    //     {
    //     slov += 1;
    //     flag = 1;
    //     }
    //    else 
    //        if (string[i] == ' ') flag = 0;
    //for (int i = 0; string[i] != '\0'; i++)
    //    if (string[i] == ' ') probel++;
    //    cout << "Cреднюю длина слова = " << (strlen(string) - probel) / slov << "\n";
    //    cout << slov << "\n" << probel<< "\n" << strlen(string);
    //delete[] string;

    //3.Напишите программу, которая генерирует пароль указанной длины.
    setlocale(LC_ALL, "Rus");
    int N;
    const int MAX_SIZE = 8;
    char string[MAX_SIZE];
    srand(time(0));

    do {
        system("cls");
        cout << "Введите размер пароля для генерациии (N > 4): ";
        cin >> N;
    } while (N <= 4 || N >= MAX_SIZE);

    for (int i = 0; i < N; ++i)
        string[i] = char('A' + rand() % 26);
    string[N] = '\0';

    cout << "Сгенерированный пароль: " << string <<"\n";

}

    
