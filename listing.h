// CMSC 430 Compiler Theory and Design
// Project 1 Skeleton
// UMGC CITE, Summer 2023
// Robert Carswell
// 1 January 2024
// No changes or modifications


// This file contains the function prototypes for the functions that produce
// the compilation listing

enum ErrorCategories {LEXICAL, SYNTAX, GENERAL_SEMANTIC, DUPLICATE_IDENTIFIER,
	UNDECLARED};
	
void firstLine();
void nextLine();
void lastLine();
void appendError(ErrorCategories errorCategory, string message);

