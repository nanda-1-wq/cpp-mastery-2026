# 🎯 Day 1 - Bonus Challenges

Completed the main lesson? Try these extra challenges to level up!

---

## Challenge 1: ASCII Art Banner ⭐

Create a program that prints your name in ASCII art.

**Example output:**
```
 ____  _           _       
|  _ \(_)___ _   _(_) __ _ 
| |_) | / __| | | | |/ _` |
|  _ <| \__ \ |_| | | (_| |
|_| \_\_|___/\__,_|_|\__,_|
```

**Hints:**
- Use multiple `std::cout` statements
- Each line of art is a separate string
- Use backslash `\\` to print a single backslash

---

## Challenge 2: Multiple Inputs ⭐⭐

Modify `greeting.cpp` to ask for:
- First name
- Last name
- Age
- Favorite color
- City you live in

Then print a nice summary card!

**Example output:**
```
╔════════════════════════════════╗
║      STUDENT INFO CARD         ║
╠════════════════════════════════╣
║ Name:    Alex Johnson          ║
║ Age:     16 years old          ║
║ Color:   Blue                  ║
║ City:    San Francisco         ║
╚════════════════════════════════╝
```

---

## Challenge 3: Math Quiz ⭐⭐

Create a simple addition quiz:
1. Print "What is 5 + 7?"
2. Read the user's answer
3. Check if it's correct (12)
4. Print "Correct!" or "Wrong! The answer is 12"

**New concepts you'll need:**
- `if` statement (we'll learn this properly on Day 6, but try to Google it!)
- Comparison operators (`==` for equals)

**Example:**
```cpp
if (answer == 12) {
    std::cout << "Correct!" << std::endl;
} else {
    std::cout << "Wrong! The answer is 12" << std::endl;
}
```

---

## Challenge 4: Calculator Tease ⭐⭐⭐

This is HARD for Day 1, but give it a shot!

Create a program that:
1. Asks for two numbers
2. Asks which operation: `+`, `-`, `*`, or `/`
3. Performs the calculation
4. Prints the result

**You'll need:**
- Multiple variables (two numbers, one operator)
- `if-else` statements (Google "C++ if else")
- Arithmetic operations

Don't worry if you can't complete this - we'll build a proper calculator on Day 4!

---

## Challenge 5: Story Generator ⭐⭐

Create a Mad Libs-style story generator!

Ask the user for:
- A name
- An adjective (like "silly" or "brave")
- A noun (like "dragon" or "computer")
- A verb (like "dance" or "code")
- A place

Then print a funny story using their inputs!

**Example:**
```
Once upon a time, there was a silly programmer named Alex.
They loved to code with their computer in San Francisco.
Every day, they would dance until sunset!
The end.
```

---

## Challenge 6: Debugging Practice 🐛

This code has errors. Can you find and fix them?

```cpp
#include <iostream>

int main() {
    std:cout << "What's your name? ";
    String name;
    std::cin >> name
    
    std::cout << "Hello, " name << "!" << std::endl;
    
    Return 0;
}
```

**Errors to find:** There are 5 bugs! Can you spot them all?

<details>
<summary>Click to see hints</summary>

1. Missing colon in line 4
2. Wrong capitalization in line 5
3. Missing semicolon in line 6
4. Missing operator in line 8
5. Wrong capitalization in line 10

</details>

---

## Challenge 7: Explore & Experiment 🔬

Try changing things in your programs and see what happens:

1. What if you remove `return 0;`? Does it still work?
2. What if you use `\n` instead of `std::endl`? Any difference?
3. What happens if you use `std::cin >> age` but type "hello" instead of a number?
4. Can you print emojis? Try: `std::cout << "Hello! 😊" << std::endl;`

**Document your findings!** Write a comment in your code about what you discovered.

---

## 🏆 Completion Checklist

Mark off what you completed:

- [ ] Challenge 1: ASCII Art Banner
- [ ] Challenge 2: Multiple Inputs
- [ ] Challenge 3: Math Quiz
- [ ] Challenge 4: Calculator Tease
- [ ] Challenge 5: Story Generator
- [ ] Challenge 6: Debugging Practice
- [ ] Challenge 7: Explore & Experiment

---

## 💡 Tips

- **Don't copy-paste!** Type the code yourself to build muscle memory
- **Experiment!** Change things and see what breaks
- **Google is your friend!** Search "C++ how to [thing you want to do]"
- **Read error messages!** They're trying to help you
- **Take breaks!** Your brain learns better with rest

---

## 🎓 Learning Resources

If you get stuck or want to learn more:

- [cplusplus.com/doc/tutorial/](http://cplusplus.com/doc/tutorial/)
- [learncpp.com](https://www.learncpp.com/)
- Stack Overflow (search for your error messages!)
- YouTube: "C++ tutorial" + your topic

---

Remember: **Making mistakes is how you learn!** Don't be afraid to break things. That's what coding is all about! 🚀

*Challenges created for Week 1, Day 1 - cpp-mastery-2025*
