// preconfiguracion
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string answer, word, letter;
    int attempts, matches, emptySpaces;
    attempts = 3;

    cout << "Configure la frase a adivinar:";
    getline(cin, answer);
    for (char c : answer)
    {
        if (c == ' ')
        {
            word += " ";
        }
        else
        {
            word += "-";
        }
    }
    cout << "Bienvenido al Juego de Ahorcado trate de advinar la frase.\n";
    while (attempts != 0)
    {
        matches = 0;
        emptySpaces = 0;
        cout << word << "   [" << string(attempts, char('*')) << "]\n>";
        getline(cin, letter);
        for (int i = 0; i < answer.length(); i++)
        {
            if (tolower(answer[i]) == tolower(letter[0]))
            {
                matches++;
                word[i] = answer[i];
            }
            if (word[i] == '-')
            {
                emptySpaces++;
            }
        }
        if (matches > 1)
        {
            cout << "La letra '" << letter << "' aparece " << matches << " veces. :D\n";
        }
        else if (matches > 0)
        {

            cout << "La letra '" << letter << "' aparece una vez en la frase. :D\n";
        }
        else
        {

            cout << "La frase no contiene ninguna '" << letter << "'. D:\n";
            attempts--;
        }
        if (emptySpaces == 0)
        {
            cout << "Has ganado!!!!. La frase es \"" << answer << "\" , eres asombroso :D.\n";
            break;
        }
    }
    if (attempts == 0)
    {
        cout << word << "   [" << string(attempts, char('*')) << "]\n";
        cout << "has advinado la frase ? , cual es ? \n:";
        getline(cin, word);
        string lower_answer = answer;
        transform(lower_answer.begin(), lower_answer.end(), lower_answer.begin(), [](unsigned char c)
                  { return std::tolower(c); });
        transform(word.begin(), word.end(), word.begin(), [](unsigned char c)
                  { return std::tolower(c); });

        if (word == lower_answer)
        {
            cout << "Has ganado!!!!. La frase es \"" << answer << "\" , eres asombroso :D.\n";
        }
        else
        {
            cout << "se acabaron tus intentos,la frase era \"" << answer << "\" ,has perdido :c\n";
        }
    }

    return 0;
}