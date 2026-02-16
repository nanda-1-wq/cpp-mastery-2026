#include <iostream>
#include <string>

int main(){

    std::string name;
    int age;

    std::cout <<"What is your name ?";
    std::cin >> name;

    std::cout << "how old are you ?";
    std::cin >> age;

    std::cout << "Hello, " << name << "!" <<std::endl;
    std::cout << "You are " << age << "years old" << std::endl;
    std::cout << "welcom to C++ programming language class" << std::endl;

    return 0;
}



// greeting.cpp - Personalized Greeting Program
// Week 1, Day 1 - Project
// 
// This program asks for the user's name and age, then greets them!
// New concepts: variables, std::cin, std::string

#include <iostream>
#include <string>   // We need this for std::string

int main() {
    // Declare variables to store user information
    std::string name;    // Stores text (like "Alice" or "Bob")
    int age;             // Stores whole numbers (like 15 or 17)
    
    // Ask for the user's name
    std::cout << "What's your name? ";
    std::cin >> name;    // Read input and store in 'name'
    
    // Ask for the user's age
    std::cout << "How old are you? ";
    std::cin >> age;     // Read input and store in 'age'
    
    // Print a personalized greeting
    std::cout << "\n";   // Blank line for spacing
    std::cout << "================================" << std::endl;
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are " << age << " years old." << std::endl;
    std::cout << "Welcome to C++ programming!" << std::endl;
    std::cout << "================================" << std::endl;
    
    return 0;
}

/*
 * COMPILE & RUN:
 * 
 * g++ greeting.cpp -o greeting
 * ./greeting
 * 
 * SAMPLE OUTPUT:
 * What's your name? Alex
 * How old are you? 16
 * 
 * ================================
 * Hello, Alex!
 * You are 16 years old.
 * Welcome to C++ programming!
 * ================================
 */












