#include <iostream>
#include <iomanip>

using namespace std;
 int main()
try
{
    read("data.txt", protocols, size);
    cout << "***** Ïðîòîêîë ðàáîòû â Èíòåðíåò *****\n\n";
    for (int i = 0; i < size; i++)
    {
        cout << protocols[i]->start.hour << ':' << protocols[i]->start.min << ':' << protocols[i]->start.sec << '\n';
        cout << protocols[i]->end.hour << ':' << protocols[i]->end.min << ':' << protocols[i]->end.sec << '\n';
        cout << protocols[i]->received << '\n';
        cout << protocols[i]->sent << '\n';
        /********** âûâîä âðåìåíè èñïîëüçîâàíèÿ **********/
        cout << "Íà÷àëî..........: ";
        // âûâîä âðåìåíè íà÷àëà ñåññèè èñïîëüçîâàíèÿ
        cout << setw(2) << setfill('0') << protocols[i]->start.hour << ":";
        cout << setw(2) << setfill('0') << protocols[i]->start.min << ":";
        cout << setw(2) << setfill('0') << protocols[i]->start.sec << endl;
        cout << "Êîíåö...........: ";
        // âûâîä âðåìåíè êîíöà ñåññèè èñïîëüçîâàíèÿ
        cout << setw(2) << setfill('0') << protocols[i]->end.hour << ":";
        cout << setw(2) << setfill('0') << protocols[i]->end.min << ":";
        cout << setw(2) << setfill('0') << protocols[i]->end.sec << endl;

        /********** âûâîä ïåðåäà÷è äàííûõ **********/
        cout << "Ïîëó÷åíî........: ";
        // âûâîä ðàçìåðà ïîëó÷åííûõ äàííûõ â áàéòàõ
        cout << protocols[i]->received << endl;
        cout << "Îòïðàâëåíî......: ";
        // âûâîä ðàçìåðà îòïðàâëåííûõ äàííûõ â áàéòàõ
        cout << protocols[i]->sent << endl;

        /********** âûâîä ïðîãðàììû **********/
        // âûâîä ïîëíîãî ïóòè ê èñïîëíÿåìîé ïðîãðàììå
        cout << "Ïðîãðàììà.......: ";
        cout << protocols[i]->path << endl;
        cout << '\n';
    }