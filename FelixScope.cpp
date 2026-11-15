#include <iostream>
#include <vector>
#include <windows.h>
#include <tlhelp32.h>

struct Process {
    int pid;
    std::string name;
    int ram;
};

std::vector<Process> processes;


void loadProcesses() {
    HANDLE snapshot = CreateToolhelp32Snapshot(
        TH32CS_SNAPPROCESS, 0
    );

    if (snapshot == INVALID_HANDLE_VALUE) {
        std::cout << "Something went wrong!\n";
        return;
    }

    PROCESSENTRY32 entry{};
    entry.dwSize = sizeof(entry);

    processes.clear();

    if (Process32First(snapshot, &entry)) {
        do {
            processes.push_back({
                static_cast<int>(entry.th32ProcessID),
                entry.szExeFile,
                0
                });
        } while (Process32Next(snapshot, &entry));
    }

    CloseHandle(snapshot);
}




void waitForEnter() {
    //zebys szlo do menu
    std::cout << "\nNacisnij Enter, aby wrocic do menu...";
    std::cin.ignore(1000, '\n');
    std::cin.get();
}

void showProcesses() {
    std::cout << "\x1b[2J\x1b[H\n";
    std::cout << "PROCESY\nPID     NAZWA\n";
    for (int i = 0; i < processes.size(); i++) {
        std::cout << processes[i].pid << "  " << processes[i].name << "\n";
    }
    
    waitForEnter();
}

void findProcess(){
    int pidChoice;
    bool found = false;
    std::cout << "\x1b[2J\x1b[H\n";
    std::cout << "SZUKANIE PROCESU\npodaj pid procesu ktory chcesz znalezc: ";
    std::cin >> pidChoice;
    for (int i = 0; i < processes.size(); i++) {
        if (pidChoice == processes[i].pid){
            found = true;
            std::cout << "Proces o tym PID to: " << processes[i].name;
            break;
        }
    }
    if (!found) {
        std::cout << "Nie znaleziono procesu o tym PID!\n";
    }
    std::cout << "\n";

    waitForEnter();


}

void showLargestProcess() {
    int maxIndex = 0;
    std::cout << "\x1b[2J\x1b[H\n";
    if (processes.empty()){
        std::cout << "Brak procesow!\n";
        waitForEnter();
        return;
    }
    else {
        for (int i = 1; i < processes.size(); i++){
            if (processes[i].ram > processes[maxIndex].ram){
                maxIndex = i;
            }
        }
        std::cout << "PID     NAZWA     ZUZYCIE\n";
        std::cout << processes[maxIndex].pid << "  " << processes[maxIndex].name << "  " << processes[maxIndex].ram;

        waitForEnter();
    }
}

int main(){
    int choice;
    
    //menu
    while (true) {
        std::cout << "\x1b[2J\x1b[H\n";
        std::cout << "===== FelixScope v0.3 =====\n1. Wyswietl procesy\n2. Wyszukaj proces\n4. Wyjscie\nTwoj wybor: ";
        std::cin >> choice;
        loadProcesses();

        //wybory
        if (choice == 1) {
            showProcesses();
        }
        else if (choice == 2){
            findProcess();
        }
        /*else if (choice == 3) {
            showLargestProcess();
        }*/
        else if (choice == 4) {
            break;
        }
        else {
            std::cout << "\nzly wybor!\nsprobuj ponownie!";
            waitForEnter();
        }
    }
}
