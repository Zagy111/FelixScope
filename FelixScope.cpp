#include <iostream>
#include <vector>
// int choice;
// int pid[4] = {123, 562, 946, 619};
// std::string name[4] = {"discord.exe", "chromium.exe", "spotify.exe", "vscode.exe"};
// int ram[4] = {120, 450, 210, 320};

struct Process {
    int pid;
    std::string name;
    int ram;
};

std::vector<Process> processes;



void waitForEnter() {
    //zebys szlo do menu
    std::cout << "\nNacisnij Enter, aby wrocic do menu...";
    std::cin.ignore(1000, '\n');
    std::cin.get();
}

void showProcesses() {
    std::cout << "\x1b[2J\x1b[H\n";
    std::cout << "PROCESY\nPID     NAZWA     ZUZYCIE\n";
    for (int i = 0; i < processes.size(); i++) {
        std::cout << processes[i].pid << "  " << processes[i].name << "  " << processes[i].ram << "\n";
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

void addProcess(){
    std::cout << "\x1b[2J\x1b[H\n";
    Process newProcess;
    std::cout << "Podaj PID dla procesu: ";
    std::cin >> newProcess.pid;
    std::cout << "Podaj nazwe dla procesu: ";
    std::cin >> newProcess.name;
    std::cout << "Podaj zuzycie dla procesu: ";
    std::cin >> newProcess.ram;

    processes.push_back({newProcess.pid, newProcess.name, newProcess.ram});

    waitForEnter();
}

int main(){
    processes.push_back({123, "discord.exe", 120});
    processes.push_back({372, "vscode.exe", 230});
    processes.push_back({562, "chromium.exe", 450});
    processes.push_back({946, "spotify.exe", 210});

    int choice;
    //menu
    while (true) {
        std::cout << "\x1b[2J\x1b[H\n";
        std::cout << "===== FelixScope v0.2 =====\n1. Wyswietl procesy\n2. Wyszukaj proces\n3. Proces z najwiekszym RAM\n4. Wyjscie\n99. dodanie procesu\nTwoj wybor: ";
        std::cin >> choice;

        //wybory
        if (choice == 1) {
            showProcesses();
        }
        else if (choice == 2){
            findProcess();
        }
        else if (choice == 3) {
            showLargestProcess();
        }
        else if (choice == 99){
            addProcess();
        }
        else if (choice == 4) {
            break;
        }
        else {
            std::cout << "\nzly wybor!\nsprobuj ponownie!";
            waitForEnter();
        }
    }
}