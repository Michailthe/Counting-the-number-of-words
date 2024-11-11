#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    // Запрашиваем строку у пользователя
    cout << "Введите строку: ";
    getline(cin, input); // Считываем строку с пробелами

    int wordCount = 0; // Счетчик слов
    bool inWord = false; // Флаг для отслеживания нахождения внутри слова

    // Перебираем символы в строке
    for (char c : input) {
        if (c != ' ') { // Если символ не пробел
            if (!inWord) { // Если мы не в слове, то начинаем новое слово
                inWord = true;
                wordCount++; // Увеличиваем счетчик слов
            }
        }
        else {
            inWord = false; // Если пробел, значит, мы вышли из слова
        }
    }

    // Выводим количество слов
    cout << "Ответ: " << wordCount << endl;

    return 0;
}