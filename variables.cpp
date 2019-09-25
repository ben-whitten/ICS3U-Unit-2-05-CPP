// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: September 2019
// This is a program which shows how local and global variables work.

#include <iostream>

int variableX = 13;

void localVariable() {
// This is the local variable

    int variableX = 11;
    int variableY = 15;
    int variableZ = variableX + variableY;
    std::cout << "variableX, variableY, variableZ:" << variableX << "+"
              << variableY << "=" << variableZ << std::endl;
}


void globalVariable() {
// This is the global variable

    variableX = variableX + 1;
    int variableY = 15;
    int variableZ = variableX + variableY;
    std::cout << "variableX, variableY, variableZ:" << variableX << "+"
              << variableY << "=" << variableZ << std::endl;
}


int main() {
    localVariable();
    globalVariable();
}
