# 📘 Week 1, Day 1: Environment Setup & Your First C++ Program

## 🎯 Today's Goals
By the end of today, you will:
1. ✅ Set up your GitHub repository
2. ✅ Learn essential Git commands
3. ✅ Write and run your first C++ program
4. ✅ Understand the basic structure of a C++ program
5. ✅ Create a personalized greeting program

---

## 📚 Part 1: Understanding C++ (5 minutes)

### What is C++?
C++ is a powerful, fast programming language used to build:
- **Video Games** (Unreal Engine, many AAA games)
- **Operating Systems** (Windows, macOS, Linux parts)
- **Browsers** (Chrome, Firefox)
- **High-performance apps** (Adobe Photoshop, trading systems)

### Why Learn C++?
- Gives you DEEP understanding of how computers work
- Makes you a better programmer in ANY language
- High-paying jobs (average $100k+ for C++ developers)
- You control memory and performance directly

---

## 🛠️ Part 2: Git & GitHub Setup (15 minutes)

### Step 1: Create Your GitHub Repository

1. Go to [github.com](https://github.com) and sign in
2. Click the **+** icon (top right) → **New repository**
3. Name it: `cpp-mastery-2026` or `learning-cpp`
4. ✅ Check "Add a README file"
5. Choose "Public" (so I can see your progress!)
6. Click **Create repository**

### Step 2: Clone to Your Mac

Open **Terminal** (or use VS Code's integrated terminal):

```bash
# Navigate to where you want your code
cd ~/Documents

# Clone your repo (replace YOUR-USERNAME)
git clone https://github.com/YOUR-USERNAME/cpp-mastery-2026.git

# Enter the folder
cd cpp-mastery-2026
```

### Step 3: Open in VS Code

```bash
# Open VS Code in current folder
code .
```

---

## 💻 Part 3: Your First C++ Program (20 minutes)

### The Anatomy of a C++ Program

Every C++ program has these parts:

```cpp
#include <iostream>  // ← Preprocessor directive (imports tools)

int main() {         // ← Main function (program starts here)
    std::cout << "Hello, World!" << std::endl;  // ← Output statement
    return 0;        // ← Exit code (0 = success)
}
```

Let me break this down like you're 5:

1. **`#include <iostream>`** 
   - Think of this as "importing a toolbox"
   - `iostream` = Input/Output Stream (tools for printing and reading)

2. **`int main() { ... }`**
   - The "front door" of your program
   - Computer always starts here
   - `int` means it returns a whole number when done

3. **`std::cout << "Hello, World!"`**
   - `std::cout` = "Character OUTput" (printing to screen)
   - `<<` = "send to" operator (like a conveyor belt)
   - `"Hello, World!"` = the text to print (in quotes!)

4. **`std::endl`**
   - End Line = move to next line after printing

5. **`return 0;`**
   - Tells the computer "I finished successfully!"
   - 0 = no errors (like giving a thumbs up 👍)

---

## 🔨 Part 4: Let's Code!

### Exercise 1: Hello World

1. In VS Code, create a new file: `week-01/day-01-hello-world/hello.cpp`
2. Type the code from above (DON'T copy-paste yet - typing helps you learn!)
3. Save the file

### Compile & Run

In Terminal (inside your repo folder):

```bash
# Compile (turn C++ code into machine code)
g++ week-01/day-01-hello-world/hello.cpp -o week-01/day-01-hello-world/hello

# Run it!
./week-01/day-01-hello-world/hello
```

You should see:
```
Hello, World!
```

🎉 **CONGRATULATIONS!** You're officially a C++ programmer!

---

## 🎨 Part 5: Project - Personalized Greeting (30 minutes)

Now let's make it more interesting! We'll create a program that:
- Asks for your name
- Asks for your age
- Greets you personally

### New Concepts You'll Learn:
1. **Variables** - containers that store data
2. **`std::cin`** - reading input from user
3. **String concatenation** - combining text

### The Code

Create `greeting.cpp` in the same folder. I'll provide this file separately.

---

## 📝 Part 6: Commit to GitHub (10 minutes)

After you've created both programs, let's save your work to GitHub!

### Git Workflow (you'll do this EVERY day):

```bash
# 1. Check what changed
git status

# 2. Add your files (the dot means "add everything")
git add .

# 3. Commit with a message
git commit -m "Day 1: Hello World and Greeting program complete"

# 4. Push to GitHub
git push origin main
```

**Pro Tip:** Commit messages should describe WHAT you did, like:
- ✅ "Day 1: First C++ program"
- ✅ "Added greeting program with user input"
- ❌ "stuff" (too vague!)
- ❌ "asdfasdf" (what were you thinking??)

---

## 🎯 Today's Challenges

### Challenge 1: Modify Hello World
Change the program to print:
```
Hello, World!
Welcome to C++ Programming!
This is going to be AWESOME!
```

### Challenge 2: Get Creative
Modify `greeting.cpp` to also ask for:
- Favorite color
- Favorite programming language (they'll probably say Python, prove them wrong 😄)

---

## 📖 Key Takeaways

Today you learned:
- ✅ C++ programs start at `main()`
- ✅ `#include <iostream>` gives you input/output tools
- ✅ `std::cout` prints to screen
- ✅ `std::cin` reads from user
- ✅ Statements end with semicolons (`;`)
- ✅ Git commands: clone, add, commit, push

---

## 🤔 Common Beginner Mistakes

1. **Forgetting semicolons** → Compiler yells at you
2. **Case sensitivity** → `Main()` ≠ `main()`
3. **Forgetting quotes** → `std::cout << Hello;` ❌ vs `"Hello"` ✅
4. **Not compiling before running** → You edited the file but forgot to recompile!

---

## 🏠 Homework (Optional but Recommended)

1. Read the lecture material again
2. Try writing a program from memory
3. Experiment: What happens if you remove `return 0;`? (Try it!)
4. Watch: "C++ in 100 Seconds" by Fireship on YouTube

---

## 📅 Tomorrow: Variables & Data Types

We'll dive deeper into:
- Different types of data (numbers, text, true/false)
- How to store and manipulate data
- Building a "Personal Info Card" program

---

## 💬 Questions? Stuck?

Share your code with me and I'll help debug!

**Remember:** Every expert was once a beginner. The fact that you're here, Day 1, ready to learn - that's HUGE! 🚀

---

*Lesson created for cpp-mastery-2026 | Week 1, Day 1*
