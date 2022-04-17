// TextAdventureEngine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include "Context.h"
using namespace std;

void LoadAllRooms() {
    return;
}

void SetupTextAdventure() {
    LoadAllRooms();
}

void RunTextAdventure() {
    return;
}

bool OpenProject(char* projectName) {
    struct stat buffer;
    if (stat(projectName, &buffer) != 0) {
        std::cout << "directory doesn't exist!";
        return false;
    }
    else {
        std::cout << "directory exists!";
        return true;
    }
}

int main(int argc, char** argv)
{
    Context* context = new Context();
    std::cout << "Ciao, maestro creatore di avventure!\n";
    if (argc == 0) {
        cout << "Inserisci in riga di comando il nome del progetto che vuoi caricare" << endl;
        return 1;
    }
    if (OpenProject(argv[1]) == false) {
        cout << "Mi spiace, progetto non trovato" << endl;
        return 1;
    }
    context->SetProjectName(argv[1]);
    std::cout << "Stai caricando il progetto <<" << context->GetProjectName() << ">>\n";
    SetupTextAdventure();
    RunTextAdventure();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
