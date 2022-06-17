#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include <Windows.h> // color
#include <conio.h>  //_getch()
#include <fstream> // create file

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void printVector(vector<int> map)
{
    cout << endl;

    int count = 0;
    for (int i = 0; i < 5; ++i)
    {
        for (int k = 0; k < 5; ++k)
        {
            cout << map[count] << " ";
            count++;
        }

        cout << endl;
    }

    cout << endl << endl;
}

void printBeautyVector(vector<int> mapUser, short activeItem)
{
    cout << endl;

    char high = 254;
    char mine = 'X';
    char clear = '_';

    int count = 0;
    for (int i = 0; i < 5; ++i)
    {
        cout << "   ";
        for (int k = 0; k < 5; ++k)
        {
            if (count == activeItem) SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
            else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN | FOREGROUND_INTENSITY);

            if (mapUser[count] == 0) cout << high << " ";
            else if (mapUser[count] == 1) cout << "_" << " ";
            else if (mapUser[count] == 2) cout << mine << " ";

            count++;
        }

        cout << endl;
    }

    cout << endl << endl;
}

// No using
void showMenu()
{
    system("cls");
    cout << "Play" << endl;
    cout << "Show leader board" << endl;
    cout << "Save and Exit" << endl;
}

void gotoxy(short x, short y)
{
    SetConsoleCursorPosition(hStdOut, { x,y });
}

void ConsoleCursorVisible(bool show)
{
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut, &structCursorInfo);
    structCursorInfo.bVisible = show;
    SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}

int checkCordinates(const vector<int> map, vector<int> mapUser, const short chosenElement)
{
    // Checking 
    if (map[chosenElement] == 0) 
    {
        mapUser[chosenElement] = 2;     // clear
    }
    else if (map[chosenElement] == 1)
    {
        mapUser[chosenElement] == 3;    // mine
    }

    mapUser[1] = 2;
    return mapUser[1];

    // Return vector
    for (int i = 0; i < size(mapUser); i++)
    {
        return mapUser[i];
    }

    //return 0;
}

void printCheckedMap(const vector<int> mapUser)
{

}

//!======== MAIN ===========

int main()
{
    // Seed of random
    srand(time(NULL));

    // Crate file
    ifstream fsFile;
    string path = "config.dll";
    fsFile.open("config.dll");  // without ::app

    //fsFile << msg;  // write
    int record;
    fsFile >> record;  // read
    int recordNew = 0;


    
    vector<int> map = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };    // 25
    vector<int> mapUser = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    string menu[] = { "1. Play", "2. Show leader board", "3. Save and Exit" };

    //cout << "1. Play\n2. Show leader board\n\n3. Save Exit" << endl;

    // Starting arguments
    SetConsoleTitle(L"Saper v3.1");      // add lvl's after
    ConsoleCursorVisible(false);

    short activeMenuItem = 0;   // which active
    int ch = 0;               // changing button

    // Const values
    const char UP = 72;
    const char DOWN = 80;
    const char LEFT = 75;
    const char RIGHT = 77;
    const char ENTER = 13;
    const char ESC = 27;

    // Centere
    int x = 35, y = 8;
    gotoxy(x, y);

    bool startGame = false;

    //# Do 
    bool beingDo = true;
    while (beingDo)
    {
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t\t\t(" << activeMenuItem << ")";

        // Centering
        x = 35, y = 8;
        gotoxy(x, y);  // move cursor

        for (int i = 0; i < size(menu); i++)
        {
            // Coloring active item
            if (i == activeMenuItem) SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
            else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);

            gotoxy(x, y++);
            cout << menu[i] << "     " << endl;
        }

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
        cout << "\n\n\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\tCreated by ManiFast" << endl;

        //Listening buttons
        ch = _getch();
        if (ch == 224) ch = _getch();  // <- ^ ->

        switch (ch)
        {
        case ESC: beingDo = false; break;
        case UP: activeMenuItem--; break;
        case DOWN: activeMenuItem++; break;
        case ENTER:
            system("cls");

            if (activeMenuItem == 0)
            {
                //game();
                // Start
                startGame = true;
                beingDo = false;
            }
            else if (activeMenuItem == 1)
            {
                beingDo = false;
                system("cls");
                SetConsoleTextAttribute(hStdOut, 7);
                
                fstream fsFile;
                fsFile.open("config.dll");  // without ::app

                string recordShow;
                fsFile >> recordShow;
                cout << "Record is " << recordShow << endl;
            }
            else if (activeMenuItem == 2)
            {
                beingDo = false;

                // Saving to leader board
            }

            break;
        default:
            cout << "Code of button is " << (int)ch << "         ";
            break;
        }


        if (activeMenuItem < 0) activeMenuItem = 0;
        if (activeMenuItem >= size(menu)) activeMenuItem = size(menu)-1;
    }

    if (startGame == true)
    {
        // Graphics arguments
        system("cls");
        SetConsoleTextAttribute(hStdOut, 7);    // Text to white
        //cout << "\033[253m";

        //# Level
        string menuLvl[] = { "1. Easy", "2. Norm", "3. Hard" };

        bool lvlChosen = false;
        short lvl;
        short activeItemLvl = 0;
        ch = 0;
        x = 35;
        y = 8;

        bool beingDo1 = true;
        while (beingDo1)
        {
            system("cls");
            x = 35, y = 8;
            gotoxy(x, y);

            for (int i = 0; i < size(menuLvl); i++)
            {
                if (activeItemLvl == i) SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
                else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);

                gotoxy(x, y++);
                cout << menuLvl[i] << endl;
            }

            ch = _getch();
            if (ch == 224) ch = _getch();

            switch (ch)
            {
                case ESC: beingDo1 = false;
                case UP: activeItemLvl--; break;
                case DOWN: activeItemLvl++; break;

                case ENTER:
                    lvl = activeItemLvl;

                    beingDo1 = false;
                    system("cls");
                    break;
            }

            if (activeItemLvl < 0) activeItemLvl = 0;
            if (activeItemLvl > size(menuLvl) - 1) activeItemLvl = size(menuLvl) - 1;
        }
        

        //printVector(map);
        //printBeautyVector(map);

        //# Game
        // Set level random
        short count;
        if (lvl == 0)
        {
            count = (rand() % 2) + 3;      // 3-5
            for (int i = 0; i < count; ++i)
            {
                int randNumber = rand() % 25;     // 0-25
                map[randNumber] = 1;
            }
            SetConsoleTitle(L"Saper lvl ezz");
        }
        else if (lvl == 1)
        {
            count = (rand() % 2 + 5);      // 5-7  (7-5)=2  3
            for (int i = 0; i < count; ++i)
            {
                int randNumber = rand() % 25;
                map[randNumber] = 1;
            }
            SetConsoleTitle(L"Saper lvl normmm");
        }
        else if (lvl == 2)
        {
            count = (rand() % 2 + 7);
            for (int i = 0; i < count; ++i)
            {
                int randNumber = rand() % 25;
                map[randNumber] = 1;
            }
            SetConsoleTitle(L"Saper lvl god");
        }

        int x = 3, y = 2;
        short activeMapItem = 0;
        int ch = 0; // 25 (0-24)

        bool win = false;
        bool beingDo2 = true;
        while (beingDo2)
        {
            system("cls");
            gotoxy(3, 2);

            // Debug
            //cout << "count: " << count;

            printBeautyVector(mapUser, activeMapItem);
            // Debug
            //cout << endl << endl;
            //printVector(map);

            ch = _getch();
            if (ch == 224) ch = _getch();

            switch (ch)
            {
                case ESC: beingDo2 = false;
                case UP: activeMapItem-=5; break;
                case DOWN: activeMapItem+=5; break;
                case LEFT: activeMapItem--; break;
                case RIGHT: activeMapItem++; break;

                case ENTER: 
                    // Logic
                    checkCordinates(map, mapUser, activeMapItem);   // Dont return values ! I dnt know
                    // Checking 
                    if (map[activeMapItem] == 0)
                    {
                        mapUser[activeMapItem] = 1;     // clear
                        recordNew++;
                    }
                    else if (map[activeMapItem] == 1)
                    {
                        mapUser[activeMapItem] == 2;    // mine
                        win = true;
                    }

                    cout << endl << endl;

                    if (win == true)
                    {
                        beingDo2 = false;

                        SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
                        gotoxy(2, 12);
                        cout << "You lose !\n  Game over)\n\n\n";
                        SetConsoleTextAttribute(hStdOut, 7);

                        ofstream fout;
                        fout.open("config.dll");
                        if (recordNew > record) record = recordNew;

                        fout << record;       // write
                    }
            }

            if (activeMapItem < 0) activeMapItem = 0;
            if (activeMapItem >= size(map)) activeMapItem = size(map) - 1;
        }




        system("pause");
    }
    else cout << endl;
    
    fsFile.close();
    return 0;
}