
// greeting.cpp - Personalized Greeting Program
// Week 1, Day 1 - Project
// 
// This program asks for the user's name and age, then greets them!
// New concepts: variables, std::cin, std::string
#include <iostream>
#include <string>

int main(){

    std::string name;
    int age;
    std::string favColor;
    std::string favProg;

    std::cout <<"What is your name ?";
    std::cin >> name;

    std::cout << "how old are you ?";
    std::cin >> age;

    std::cout << "Hello, " << name << "!" <<std::endl;
    std::cout << "You are " << age << "years old" << std::endl;
    std::cout << "welcom to C++ programming language class" << std::endl;


    std::cout << "What is your favorite color? ";
    std::cin >> favColor;

    std::cout << "What is your Favorite programming language? ";
    std::cin >> favProg;

    std::cout << "Your favorite color is "<< favColor << " and your favorite programming language is " << favProg << std::endl;
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












