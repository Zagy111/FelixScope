# 🐾 FelixScope

**A lightweight Windows process inspector written in C++.**

FelixScope is an open-source project focused on Windows process monitoring, system diagnostics, and learning low-level Windows APIs.

The goal is to build a fast, lightweight, and user-friendly alternative for inspecting running processes on Windows.

## 🚀 Current Features (v0.3)

- List real running Windows processes
- Display process IDs (PIDs) and executable names
- Search for processes by PID
- Refresh the process list
- Retrieve process information using the Windows Tool Help API
- Store process information using C++ structs and vectors
- Interactive command-line interface (CLI)
- Basic Windows API error handling

> **Note:** FelixScope v0.3 reads real process information from Windows. RAM usage monitoring, advanced diagnostics, and a graphical interface are planned for future versions.

## 🛠️ Technologies

- **Language:** C++17
- **Operating System:** Windows
- **IDE:** Visual Studio 2026
- **API:** Windows API (Tool Help Library)
- **Data Structures:** `struct`, `std::vector`
- **Interface:** Command-line interface (CLI)

### Windows API Functions

FelixScope currently uses:

- `CreateToolhelp32Snapshot()` — creates a snapshot of running processes
- `Process32First()` — retrieves the first process
- `Process32Next()` — retrieves subsequent processes
- `CloseHandle()` — releases the snapshot handle

## 📦 Installation and Usage

### Requirements

- Windows 10 or Windows 11
- Visual Studio with C++ Desktop Development tools installed
- A C++17-compatible compiler

### Build and Run

1. Clone the repository:

   ```bash
   git clone https://github.com/Zagy111/FelixScope.git
   ```

2. Open Visual Studio.
3. Create an empty C++ console project.
4. Add the existing `FelixScope.cpp` file to the project.
5. Set the Character Set to **Use Multi-Byte Character Set**.
6. Build and run the application using `Ctrl + F5`.

## 🖥️ Example

```text
===== FelixScope v0.3 =====

1. Wyswietl procesy
2. Wyszukaj proces
4. Wyjscie

Twoj wybor: 1

PROCESY
PID       NAZWA
4         System
1234      explorer.exe
5678      chrome.exe
9012      discord.exe
```

*Example output. Actual process names and PIDs depend on your system.*

## 🗺️ Development Roadmap

- [x] **v0.1** — Simulated process monitoring
- [x] **v0.2** — Process structs, vectors, and dynamic process creation
- [x] **v0.3** — Real Windows process enumeration using Windows API
- [ ] **v0.4** — Real RAM usage monitoring and process sorting
- [ ] **v0.5** — CPU monitoring, thread information, and process details
- [ ] **v0.6** — Improved error handling, input validation, and code architecture
- [ ] **v1.0** — Graphical user interface (GUI)

## 🔧 Planned Improvements

- Real-time process monitoring
- CPU and memory usage statistics
- Sorting and filtering processes
- Better input validation
- Full Unicode support
- Improved error handling
- Graphical interface for Windows
- Performance optimization

## 🎯 Project Goals

- Develop practical C++ programming skills
- Understand Windows API and system internals
- Learn process management and memory monitoring
- Improve software architecture and code quality
- Build a useful open-source Windows utility

## 👨‍💻 Author

Created and maintained by [Zagy111](https://github.com/Zagy111).
