/********************************************************************
 *  Assignment: Unit 2
 *  Title:      C++ Standard Library
 *  Student:    Michael Nguyen
 *  Teacher:    Tyson McMillan
 *  Date:       03/25/2022
 *
 *  Description: This program has three vectors already made for user.
 *		User is asked to manipulate the data and add three elements and
 *		display elements to screen. The goal of the assigment is to give
 *		us hands on coding using vector templates from the C++ Standard
 *
 *
 *********************************************************************/

/********************************************************************
 *	Dr_T Unit 2 COSC-1437 Starter
 *
 *	Task: To create a single main.cpp that contains code samples and
 *		implementations of each of the following topics.
 *
 *	Top level solution folder: C_STL_Library_YourLastName
 *********************************************************************/
#include "Input_Validation_Extended.h"
#include "functions.h"
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

/********************************************************************
 *                      MAIN FUNCTION
 *********************************************************************/
int main() {
	/***************************Vectors***********************************/
	cout << "*********************Vectors*********************" << endl;
	// Write the base code for: 5. std::vector example
	vector<double> vd; // vd elments are floating point numbers
	vector<int> vi;	// vi elements are integer numbers
	vector<string> vs; // vs elements are string objects

	// Expand this code to:

	// Instruction 1 - add 3 elements to the vd vector
	vd.push_back(1);
	vd.push_back(2);
	vd.push_back(3);
	vd.push_back(55.4);

	// expanded code to push back 3 elements to the vd vector
	vd.push_back(35);
	vd.push_back(72);
	vd.push_back(13);

	// Instruction 2 - add 3 elements to the vi vector
	// expanded code to push back 3 elements to the vi vector
	vi.push_back(17);
	vi.push_back(100);
	vi.push_back(64);

	// Instruction 3 - add 3 elements to the vs vector
	// expanded code to push back 3 elements to the vi vector
	vs.push_back("Michael");
	vs.push_back("C++");
	vs.push_back("Shoot Me Now!");

	// display the 3 elements in the vd vector
	cout << "\nValues in vd vector: \n";
	for (double vals : vd) {
		cout << vals << endl;
	}
	cout << "\nAnother way to print values of vd vector: " << endl;
	for (int i = 0; i < vd.size(); i++) {
		cout << vd[i] << endl;
	}

	// display the 3 elements in the vd vector
	cout << "\nValues in vi vector: \n";
	for (int vals : vi) {
		cout << vals << endl;
	}
	cout << "\nAnother way to print values of vi vector: " << endl;
	for (int i = 0; i < vi.size(); i++) {
		cout << vi[i] << endl;
	}

	// display the 3 elements in the vs vector
	cout << "\nValues in vs vector: \n";
	for (string vals : vs) {
		cout << vals << endl;
	}
	cout << "\nAnother way to print values of vs vector: " << endl;
	for (int i = 0; i < vs.size(); i++) {
		cout << vs[i] << endl;
	}

	cout << endl << endl;

	// Instruction 4:
	/********************************************************************
	 *	Combine the 3 class examples from the geeksforgeeks site into one
	 *	program, and instantiate the respective classes in one program
	 *	within in main().  You simple duty: combine these three working
	 *	programs into one working program. Where GeekForGeek calls the
	 *	first example "MyClass", you call it "MyClassVector1" ...
	 *	MyClassVector2, so that all of your examples can be on one file.
	 *	Give GeekForGeek credit in the comments.
	 *
	 *	Note:
	 *		The default access modifier in C++ is private. That is, if
	 *		you do not declare member variables as private, the compiler
	 *		will assume private.
	 *********************************************************************/

	/************************Vector_as_Class_Member***********************/
	// Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/
	// Instanting obj1 of type MyClassVector1 and printing elements on screen
	cout << "**************Vector as a Class Member**************" << endl << endl;
	cout << "The elements inside MyClassVector 1: " << endl;
	vector<int> vec1;
	for (int i = 1; i <= 5; i++)
		vec1.push_back(i);
	MyClassVector1 obj1(vec1);
	obj1.print();

	cout << endl << endl;

	// Continue with MyClassVector2 and MyClassVector3

	// Instanting obj2 of type MyClassVector2 and printing elements on screen
	cout << "The elements inside MyClassVector 2: " << endl;
	vector<int> vec2;
	for (int i = 1; i <= 5; i++)
		vec2.push_back(i);
	MyClassVector2 obj2(vec2);
	obj2.print();

	cout << endl << endl;

	// Instanting obj3 of type MyClassVector3 and printing elements on screen
	cout << "The elements inside MyClassVector 3: " << endl;
	vector<int> vec3;
	for (int i = 1; i <= 5; i++)
		vec3.push_back(i);
	MyClassVector3 obj3(vec3);
	obj3.print();

	cout << endl << endl;

	/************************STL Iterators********************************/
	// Expanding the code from the C++ STL pdf to display 10 elements
	cout << "********************STL Iterators********************" << endl;
	vector<int> vInt(10); // declare vector of type int with 10 elements
	vInt[0] = 23;
	vInt[1] = 1;
	vInt[2] = 65;
	vInt[3] = 287;
	vInt[4] = 17;
	vInt[5] = 901;
	vInt[6] = 7;
	vInt[7] = 365;
	vInt[8] = 76;
	vInt[9] = 33;

	cout << endl;

	// Display the elements of the vector
	
	int sizevInt = 0;

	vector<int>::iterator it;
	for (it = vInt.begin(); it != vInt.end(); ++it) {
		cout << "The value of the element at index " << ++sizevInt
			 << " is " << *it << endl;
	}

	/****Section_Name*** Stack*/

	// Write comments that help one better understand what the code is doing.

	/****Section_Name**** Set*/
	// Write the code as presented in: 3. std::set

	// Write comments that help one better understand what the code is doing.

	/****Section_Name****Pair_Structure*/
	// Write the code as presented in: 4. std::pair structure

	// Write comments that help one better understand what the code is doing.

	/****Section_Name**** Map_Insert*/
	// Write the code as presented in: 14. std::map::insert

	// Write comments that help one better understand what the code is doing.

	/****Section_Name****Map_Summary*/
	// Write the code as presented in: 16. Map summary

	// Write comments that help one better understand what the code is doing.

	/****Section_Name**** Sort_Algorithm*/
	// Write the code as presented in: 23. sort example

	// Write comments that help one better understand what the code is doing.

	/****Section_Name****Predicate_Algorithm*/
	// Write the code as presented in: 25. count_if and predicate function

	// Write comments that help one better understand what the code is doing.

	return 0;
}