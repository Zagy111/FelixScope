# 🐾 FelixScope

**A lightweight process monitoring tool written in C++.**

FelixScope is an open-source learning project focused on system monitoring, process management, and Windows internals.

The long-term goal is to build a fast, lightweight, and user-friendly Windows process inspector.

## 🚀 Current Features (v0.2)

- Display a list of simulated processes
- Search for processes by PID
- Find the process with the highest RAM usage
- Add new processes dynamically
- Store process information using C++ structs and vectors
- Interactive terminal menu
- Basic input handling

> **Note:** Version 0.2 still uses simulated process data. Real Windows process monitoring is planned for future releases.

## 🛠️ Technologies

- **Language:** C++17
- **Interface:** Command-line interface (CLI)
- **Data structures:** `struct`, `std::vector`
- **Platform:** Linux and Windows (Windows-specific functionality planned)

## 📦 Getting Started

### Requirements

- A C++17-compatible compiler (GCC, Clang or MinGW-w64)

### Build and Run

**Linux:**

```bash
g++ -std=c++17 main.cpp -o FelixScope
./FelixScope
```

**Windows (MinGW-w64):**

```bash
g++ -std=c++17 main.cpp -o FelixScope.exe
.\FelixScope.exe
```

## 🗺️ Roadmap

- [x] **v0.1** — Simulated process monitoring
- [x] **v0.2** — Process structs, vectors and dynamic process creation
- [ ] **v0.3** — Read real Windows processes using the Windows API
- [ ] **v0.4** — Display real-time RAM usage and process details
- [ ] **v1.0** — Graphical user interface (GUI)

## 🔧 Planned Improvements

- Prevent duplicate PIDs
- Improve input validation
- Improve code organization
- Add process sorting and filtering

## 🎯 Project Goals

- Improve C++ programming skills
- Learn Windows API and Windows internals
- Practice clean code and software architecture
- Build a useful open-source Windows utility

## 👨‍💻 Author

Created by [Zagy111](https://github.com/Zagy111).

---

*Developed in memory of Felix. 🐾*