using namespace std;

#include "protocol.h"
#include "file_reader.h"
#include "constants.h"

int main()
{
    cout << "Laboratory work #8. GIT\n";
    cout << "Variant #5. Internet protocol\n";
    cout << "Author: Kozlova Anastasia\n";
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №8. GIT\n";
    cout << "Вариант №5. Протокол по работе интернета\n";
    cout << "Автор: Козлова Анастасия\n\n";
    protocol* protocols[MAX_FILE_ROWS_COUNT];
    int size;
    try
    {
        read("data.txt", protocols, size);
        for (int i = 0; i < size; i++)
        {
            cout << protocols[i]->start.hour << ':' << protocols[i]->start.min << ':' << protocols[i]->start.sec << '\n';
            cout << protocols[i]->end.hour << ':' << protocols[i]->end.min << ':' << protocols[i]->end.sec << '\n';
            cout << protocols[i]->received << '\n';
            cout << protocols[i]->sent << '\n';
            cout << protocols[i]->path << endl;
            cout << '\n';
        }
        for (int i = 0; i < size; i++)
        {
            delete protocols[i];
        }
    }
    catch (const char* error)
    {
        cout << error << '\n';
    }
    return 0;
