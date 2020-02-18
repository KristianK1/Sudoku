// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>
#include<list>


class Sudoku {
	friend std::ostream& operator<<(std::ostream& out, const Sudoku& rhs);
private:
	int** polje;
	std::list<int> **rjesenja;
public:
	Sudoku() {
		polje = new int*[3];
		for (int i = 0; i < 3; i++) {
			polje[i] = new int[3];
		}
		rje
	}

	void rjesavanje() {
		
	}



	bool stupac(int stupac, int broj) {
		if (broj < 1 || broj>9) return false;
		for (int i = 0; i < 9; i++) {
			if (polje[i][stupac] == broj) return false;
		}
		return true;
	}
	bool redak(int redak, int broj) {
		if (broj < 1 || broj>9) return false;
		for (int i = 0; i < 9; i++) {
			if (polje[redak][i] == broj) return false;
		}
		return true;
	}
	bool kockica(int redak, int stupac, int broj) {
		redak /= 3;
		stupac /= 3;
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++) {
				if (polje[3 * redak + i][3 * stupac + j] == broj) return false;
			}
		}
	return true;
	}
};

std::ostream& operator<<(std::ostream& out, const Sudoku& rhs) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			out << rhs.polje[i][j] << " ";
		}
		out << std::endl;
	}
	return out;
}

int main() {

	
	
	
	
	for (;;);
	return 0;
}