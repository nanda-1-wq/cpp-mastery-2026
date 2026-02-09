# 📝 Day 1 - Quick Reference Cheat Sheet

Print this out and keep it next to your computer! 🖨️

---

## Basic C++ Program Structure

```cpp
#include <iostream>  // Import I/O library

int main() {
    // Your code here
    return 0;
}
```

---

## Output (Printing)

```cpp
// Print text
std::cout << "Hello!" << std::endl;

// Print variable
int age = 16;
std::cout << age << std::endl;

// Print multiple things
std::cout << "I am " << age << "years old" << std::endl;

// New line (two ways)
std::cout << "Line 1" << std::endl;
std::cout << "Line 2\n";
```

---

## Input (Reading)

```cpp
// Read a number
int number;
std::cin >> number;

// Read text (one word)
std::string name;
std::cin >> name;

// Read full line (with spaces)
std::string fullName;
std::getline(std::cin, fullName);
```

---

## Variables

```cpp
// Declare and initialize
int age = 16;
double price = 19.99;
char grade = 'A';
bool isPassing = true;
std::string name = "Alex";

// Declare first, assign later
int score;
score = 100;
```

---

## Data Types

| Type | What it stores | Example |
|------|---------------|---------|
| `int` | Whole numbers | `42`, `-7`, `0` |
| `double` | Decimals | `3.14`, `-0.5` |
| `float` | Decimals (less precise) | `3.14f` |
| `char` | Single character | `'A'`, `'x'`, `'5'` |
| `bool` | True or False | `true`, `false` |
| `std::string` | Text | `"Hello"`, `"C++"` |

---

## Comments

```cpp
// Single-line comment

/*
   Multi-line
   comment
*/
```

---

## Common Errors & Fixes

| Error | Cause | Fix |
|-------|-------|-----|
| `expected ';'` | Forgot semicolon | Add `;` at end of line |
| `'cout' was not declared` | Forgot `std::` | Use `std::cout` or add `using namespace std;` |
| `iostream: No such file` | Wrong brackets | Use `<iostream>` not `"iostream"` |
| `undefined reference to main` | No `main()` function | Add `int main() { ... }` |

---

## Compile & Run Commands

```bash
# Compile
g++ filename.cpp -o programname

# Run
./programname

# Compile and run in one step
g++ filename.cpp -o program && ./program
```

---

## Keyboard Shortcuts (VS Code)

| Action | Shortcut (Mac) |
|--------|----------------|
| Save | `⌘ + S` |
| Run | `Ctrl + Alt + N` (Code Runner) |
| Comment line | `⌘ + /` |
| Format code | `⌥ + ⇧ + F` |
| Find | `⌘ + F` |
| Terminal | `` Ctrl + ` `` |

---

## Git Commands (Daily)

```bash
git status          # Check changes
git add .           # Stage all files
git commit -m "msg" # Commit
git push            # Upload to GitHub
```

---

## Naming Conventions

```cpp
// Variables: camelCase
int myAge = 16;
std::string firstName = "Alex";

// Constants: UPPER_CASE
const int MAX_SCORE = 100;

// Be descriptive!
int a = 10;        // ❌ What is 'a'?
int studentAge = 10;  // ✅ Clear!
```

---

## Troubleshooting Tips

1. **Read the error message** - It tells you the line number!
2. **Check semicolons** - Missing `;` is #1 beginner mistake
3. **Check spelling** - C++ is case-sensitive
4. **One error can cause many** - Fix the first error first
5. **Recompile** - Did you save and recompile?

---

## Remember

- **Every statement ends with `;`** (except things in `{}`)
- **C++ is case-sensitive** - `Main` ≠ `main`
- **Strings use double quotes** - `"text"`
- **Characters use single quotes** - `'a'`
- **Include files use `<>`** - `#include <iostream>`

---

*Keep coding! You got this! 💪*
