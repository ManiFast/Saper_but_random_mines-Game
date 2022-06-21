#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include <Windows.h> // color
#include <conio.h>  //_getch()
#include <fstream> // create file

using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

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
            else if (mapUser[count] == 2) cout << "X" << " ";

            count++;
        }

        cout << endl;
    }

    cout << endl << endl;
}

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

// Not using coz I dnt know how return vector
int checkCordinates(const vector<int> map, vector<int> mapUser, const short chosenElement)
{
    // Checking 
    if (map[chosenElement] == 0)
        mapUser[chosenElement] = 1;     // clear
    else if (map[chosenElement] == 1)
        mapUser[chosenElement] = 2;    // mine

    // Test
    //mapUser[1] = 2;
    //return mapUser[1];

    // Return vector
    for (int i = 0; i < size(mapUser); i++)
        return mapUser[i];

    //return 0;
}

void Stas(int r = 4, int lb = 9, int d = 7)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, d);

    cout << "*==============*\n";

    cout << "***************\r";
    Sleep(100);
    cout << "$(9%424 $^ &*@^\r";
    Sleep(100);
    cout << "(32#!^^ 4H fe52\r";
    Sleep(100);
    cout << ">>/fgsR#3Q4g4GE\r";
    Sleep(100);
    cout << "$#@^@Sa he $#Hs\r";
    Sleep(100);
    cout << ">>/fgsR#Eerwgv2\r";
    Sleep(100);
    cout << "@#@(*24 rw GjE3\r";
    Sleep(100);
    cout << "Рары?№3 #f Jfd@\r";
    Sleep(100);
    cout << ">>/fgsR#E$#q@g#\r";
    Sleep(100);
    cout << "|+3015_ +_ >gR%\r";
    Sleep(100);
    cout << ">>/fgsR#E$#q@g#\r";
    Sleep(100);
    cout << ">>/fgsR#Eerwgv2\r";
    Sleep(100);
    cout << "C#@(*24 rw GjE3\r";
    cout << "C$#5643 $g 43#$\r";
    Sleep(100);
    cout << "Cr#$433 3# gE$#\r";
    cout << "Cr/fgsR#E$#q@g#\r";
    Sleep(100);
    cout << "Cre&#2! Hd {/P]\r";
    cout << "Cre$#8h $G tH23\r";
    Sleep(100);
    cout << "Crea bdf@$#//zd\r";
    cout << "Crea $#@785 4{#\r";
    Sleep(100);
    cout << "Creatdf *( >m,v\r";
    cout << "Creat#$ $h bju7\r";
    Sleep(100);
    cout << "CreateR#Eerwgv2\r";
    cout << "Create- (= *&#$\r";
    Sleep(100);
    cout << "Created rw GjE3\r";
    cout << "Created H4 hj;L\r";
    Sleep(100);
    cout << "Created bf Jfd@\r";
    cout << "Created b. 4E[|\r";
    Sleep(100);
    cout << "Created by#q@g#\r";
    cout << "Created by e367\r";
    Sleep(100);
    cout << "Created by SOP]\r";
    cout << "Created by Sh)$\r";
    Sleep(100);
    cout << "Created by Stz0\r";
    cout << "Created by St^4\r";
    Sleep(100);
    cout << "Created by Stav\r";
    cout << "Created by Sta?\r";

    Sleep(130);

    SetConsoleTextAttribute(hConsole, r);
    cout << "C";
    SetConsoleTextAttribute(hConsole, d);
    cout << "reated by Stas\r";
    Sleep(50);

    SetConsoleTextAttribute(hConsole, d);
    cout << "C";
    SetConsoleTextAttribute(hConsole, r);
    cout << "r";
    SetConsoleTextAttribute(hConsole, d);
    cout << "eated by Stas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Cr";
    SetConsoleTextAttribute(hConsole, r);
    cout << "e";
    SetConsoleTextAttribute(hConsole, d);
    cout << "ated by Stas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Cre";
    SetConsoleTextAttribute(hConsole, r);
    cout << "a";
    SetConsoleTextAttribute(hConsole, d);
    cout << "ted by Stas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Crea";
    SetConsoleTextAttribute(hConsole, r);
    cout << "t";
    SetConsoleTextAttribute(hConsole, d);
    cout << "ed by Stas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Creat";
    SetConsoleTextAttribute(hConsole, r);
    cout << "e";
    SetConsoleTextAttribute(hConsole, d);
    cout << "d by Stas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Create";
    SetConsoleTextAttribute(hConsole, r);
    cout << "d";
    SetConsoleTextAttribute(hConsole, d);
    cout << " by Stas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Created";
    SetConsoleTextAttribute(hConsole, r);
    cout << " b";
    SetConsoleTextAttribute(hConsole, d);
    cout << "y Stas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Created b";
    SetConsoleTextAttribute(hConsole, r);
    cout << "y";
    SetConsoleTextAttribute(hConsole, d);
    cout << " Stas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Created by";
    SetConsoleTextAttribute(hConsole, r);
    cout << " ";
    SetConsoleTextAttribute(hConsole, d);
    cout << "Stas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Created by ";
    SetConsoleTextAttribute(hConsole, r);
    cout << "S";
    SetConsoleTextAttribute(hConsole, d);
    cout << "tas\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Created by S";
    SetConsoleTextAttribute(hConsole, r);
    cout << "t";
    SetConsoleTextAttribute(hConsole, d);
    cout << "as\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Created by St";
    SetConsoleTextAttribute(hConsole, r);
    cout << "a";
    SetConsoleTextAttribute(hConsole, d);
    cout << "s\r";
    Sleep(50);
    SetConsoleTextAttribute(hConsole, d);
    cout << "Created by Sta";
    SetConsoleTextAttribute(hConsole, r);
    cout << "s";
    SetConsoleTextAttribute(hConsole, d);
    cout << "\r";
    Sleep(50);



    cout << "Created by ";
    SetConsoleTextAttribute(hConsole, lb);
    cout << "Stas";
    SetConsoleTextAttribute(hConsole, d);
    cout << "\n*==============*\n\n";

    Beep(200, 100);
    Beep(300, 100);
}

// Const values
const char UP = 72;
const char DOWN = 80;
const char LEFT = 75;
const char RIGHT = 77;
const char ENTER = 13;
const char ESC = 27;




//!======== MAIN ===========




int main()
{
    // Seed of random
    srand(time(NULL));

    // Crate file
    ifstream fsFile;
    string path = "config.dll";
    fsFile.open("config.dll");  // without ::app

    // Save record from file
    //fsFile << msg;  // write
    int record;
    fsFile >> record;  // read
    int recordNew = 0;

    // Maps
    vector<int> map = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };    // 25
    vector<int> mapUser = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

    // cmd menu 1
    string menu[] = { "1. Play", "2. Show record", "3. Release", "4. Save and Exit" };      // Carefuly with to much endl's

    // Starting arguments
    SetConsoleTitle(L"Saper v3.1");      // add lvl's after
    ConsoleCursorVisible(false);

    short activeMenuItem = 0;   // which active
    int ch = 0;               // changing button

    // Centere cordinates
    int x = 35, y = 7;       // Carefuly with to much endl's and y

    bool startGame = false;

    //// Main logic
    //# Do 
    bool beingDo = true;
    while (beingDo)
    {
        system("cls");
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n \t\t\t\t\t\t\t\t\t\t\t(" << activeMenuItem << ")";

        // Centering
        x = 35, y = 7;
        gotoxy(x, y);  // move cursor

        for (int i = 0; i < size(menu); i++)
        {
            // Coloring active item
            if (i == activeMenuItem) SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_INTENSITY);
            else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);

            gotoxy(x, y++);
            cout << menu[i] << "     " << endl;
        }

        // Author
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

            if (activeMenuItem == 0)    // Game
            {
                startGame = true;
                beingDo = false;
            }
            else if (activeMenuItem == 1)   // Record
            {
                // beingDo = false;     // we should not exit

                // Condition
                system("cls");
                SetConsoleTextAttribute(hStdOut, 7);

                // Show record
                fstream fsFile;
                fsFile.open("config.dll");

                string recordShow;
                fsFile >> recordShow;
                cout << "Record is " << recordShow << " points." << endl << "\n\n\n(Press any button for return to menu)\n";

                SetConsoleTextAttribute(hStdOut, 0);
                system("pause");
            }
            else if (activeMenuItem == 2)   // Release
            {
                // Condotion
                system("cls");

                Stas();
                cout << endl;


                cout << "Lasted version 3.4\n\nAdding:\n Fix visual bug with mines, when u loss.\n Fix vibration in main menu\n Remove nousing functions and clear ram\n"
                    << " Add that when u lose the game, game is restarting.\n ";

                cout << "\n\n\n(Press any button for return to menu)\n";

                SetConsoleTextAttribute(hStdOut, 0);
                system("pause");
            }
            else if (activeMenuItem == 3)   // Save and exit
            {
                beingDo = false;

                // add saving to leader board


                system("exit");
            }

            break;
        default:
            // Show button key
            //cout << "Code of button is " << (int)ch << "         ";
            break;
        }

        // Not overflow
        if (activeMenuItem < 0) activeMenuItem = 0;
        if (activeMenuItem >= size(menu)) activeMenuItem = size(menu) - 1;
    }





    if (startGame == true)
    {
        // Graphics arguments
        system("cls");
        SetConsoleTextAttribute(hStdOut, 7);    // Text to white
        //cout << "\033[253m";

        //# Choose Level
        // cmd menu 2
        string menuLvl[] = { "1. Easy", "2. Norm", "3. Hard" };

        short activeItemLvl = 0;
        short lvl;
        bool lvlChosen = false;

        ch = 0;     // Set to 0 button catch
        x = 35;
        y = 8;

        bool beingDo1 = true;
        while (beingDo1)
        {
            system("cls");

            // Centering
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

            // Not overflow
            if (activeItemLvl < 0) activeItemLvl = 0;
            if (activeItemLvl > size(menuLvl) - 1) activeItemLvl = size(menuLvl) - 1;
        }

        // Point to run
        startGamePoint:
        //# Set random to Levels
        // Set count of minew in each level - random
        short count = 0;
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


        //# Start game

        int x = 3, y = 2;
        short activeMapItem = 0;
        int ch = 0;

        bool loss = false;

        bool exit = 0;

        bool beingDo2 = true;
        while (beingDo2)
        {
            // Condition
            system("cls");
            gotoxy(3, 2);

            // Debug
            //cout << "count: " << count;


            printBeautyVector(mapUser, activeMapItem);


            // Debug
            //cout << endl << endl;
            //printVector(map);

            if (loss == true)
            {
                beingDo2 = false;

                // Dondition
                SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
                gotoxy(2, 12);

                // Print open view map
                printVector(map);

                cout << "\n\nYou lose !\n  Game over)\n\n\n";
                SetConsoleTextAttribute(hStdOut, 7);

                // Write new record if he bigger then old value
                if (recordNew > record)
                {
                    record = recordNew;

                    ofstream fout;
                    fout.open("config.dll");

                    fout << record;       // write
                }
            }
            else
            {
                ch = _getch();
                if (ch == 224) ch = _getch();

                switch (ch)
                {
                case ESC: beingDo2 = false;
                case UP: activeMapItem -= 5; break;
                case DOWN: activeMapItem += 5; break;
                case LEFT: activeMapItem--; break;
                case RIGHT: activeMapItem++; break;

                case ENTER:
                    // Logic
                    // Checking
                    //checkCordinates(map, mapUser, activeMapItem);   // Dont return values ! I dnt know

                    // Checking INLINE
                    if (map[activeMapItem] == 0)
                    {
                        mapUser[activeMapItem] = 1;     // clear
                        recordNew++;
                    }
                    else if (map[activeMapItem] == 1)
                    {
                        mapUser[activeMapItem] = 2;    // mine
                        loss = true;
                    }
                }


                if (activeMapItem < 0) activeMapItem = 0;
                if (activeMapItem >= size(map)) activeMapItem = size(map) - 1;


               
            }       // else (if loss true) 

            if (beingDo2 == false)
            {
                cout << "(Press any button to start again)" << endl;
                SetConsoleTextAttribute(hStdOut, 0);
                system("pause");

                // After press any key
                system("cls");

                // Set to default
                map = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };    // 25
                mapUser = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
                recordNew = 0;

                // Go to start new game
                goto startGamePoint;
            }
        }       // BeingDo
    }       // startGame
    else cout << endl;

    fsFile.close();
    return 0;
}