# Max and Min Finder (C++)

A simple C++ console application that prompts the user to enter 10 integers and determines the **maximum** and **minimum** values among them in a single pass.

## Features
- Reads 10 integers interactively from standard input.
- Initializes `max` and `min` with the first input value, then compares the remaining 9 values in a loop.
- No array storage required (`O(1)` auxiliary space and `O(n)` time complexity).

## Getting Started

### Prerequisites
- A C++ compiler (e.g., `g++` via MinGW/GCC, Clang, or MSVC).

### Compilation & Execution

1. **Compile the source code:**
   ```bash
   g++ MaxMin.cpp -o MaxMin
   ```

2. **Run the executable:**
   - **Windows (Command Prompt / PowerShell):**
     ```powershell
     .\MaxMin.exe
     ```
   - **Linux / macOS:**
     ```bash
     ./MaxMin
     ```

## Example Usage

```text
Enter number: 15
Enter number: 42
Enter number: -7
Enter number: 8
Enter number: 23
Enter number: 99
Enter number: 4
Enter number: 12
Enter number: 0
Enter number: 31
Max: 99, Min: -7
```

## Project Structure
- `MaxMin.cpp` — Main source file containing the input loop and min/max comparison logic.

