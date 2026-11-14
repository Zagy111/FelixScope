#include <iostream>

int choice;
int pid[4] = {123, 562, 946, 619};
std::string name[4] = {"discord.exe", "chromium.exe", "spotify.exe", "vscode.exe"};
int ram[4] = {120, 450, 210, 320};
    

void waitForEnter() {
    //zebys szlo do menu
    std::cout << "\nNacisnij Enter, aby wrocic do menu...";
    std::cin.ignore(1000, '\n');
    std::cin.get();
}

void showProcesses() {
    std::cout << "\x1b[2J\x1b[H\n";
    std::cout << "PROCESY\nPID     NAZWA     ZUZYCIE\n";
    for (int i = 0; i < std::size(pid); i++) {
        std::cout << pid[i] << "  " << name[i] << "  " << ram[i] << "\n";
    }
    
    waitForEnter();
}

void findProcess(){
    int pidChoice;
    bool found = false;
    std::cout << "\x1b[2J\x1b[H\n";
    std::cout << "SZUKANIE PROCESU\npodaj pid procesu ktory chcesz znalezc: ";
    std::cin >> pidChoice;
    for (int i = 0; i < std::size(pid); i++) {
        if (pidChoice == pid[i]){
            found = true;
            std::cout << "Proces o tym PID to: " << name[i];
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
    for (int i = 1; i < std::size(ram); i++){
        if (ram[i] > ram[maxIndex]){
            maxIndex = i;
        }
    }
    std::cout << "PID     NAZWA     ZUZYCIE\n";
    std::cout << pid[maxIndex] << "  " << name[maxIndex] << "  " << ram[maxIndex];

    waitForEnter();
}

int main(){

    //menu
    while (true) {
        std::cout << "\x1b[2J\x1b[H\n";
        std::cout << "===== FelixScope v0.1 =====\n1. Wyswietl procesy\n2. Wyszukaj proces\n3. Proces z najwiekszym RAM\n4. Wyjscie\nTwoj wybor: ";
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
        else if (choice == 4) {
            break;
        }
        else {
            std::cout << "\nzly wybor!\nsprobuj ponownie!";
            waitForEnter();
        }
    }
}