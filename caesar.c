#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Эта функция получает букву и ключ и возвращает закодированную букву
char letter(int b, int key)
{
    int dop=90;
    if (islower(b)) dop=122;
    b = b + key;
    if (b > dop) b -= 26;
    return b;
}

int main(int n, char* argv[])
{
    if (n != 2)
    {
        printf("Запуск программы должен быть с параметром. К примеру, как в кавычках \"./caesar 71\"\n");
        return 1;
    }
    

    int key = atoi(argv[1]) % 26;
    string s = GetString();
    if (s != NULL)
    {
        for(int i = 0, phrase = strlen(s); i < phrase; i++)
        {
// Далее проверяется каждая буква пользовательского ввода и только буквы отправляются на кодировку
            if (isalpha(s[i])) s[i] = letter(s[i], key);
            printf("%c", s[i]);
        }
        printf("\n");
    }
}
/**
* Результат автоматической проверки находится по адресу:
* https://sandbox.cs50.net/checks/3b47c0ad23864972a5444109cd63393e
* 
*/
