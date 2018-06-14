#include <iostream>       // std::cout
#include <string>         // std::string
#include <vector>
#include <bitset>
#include <array>
#include <algorithm>

using namespace std;


int** createSudoku() {
	int height = 9;
	int width = height;

      int** array2D = 0;
      array2D = new int*[height];

      for (int h = 0; h < height; h++) {
            array2D[h] = new int[width];

            for (int w = 0; w < width; w++) {
                  // fill in some initial values
                  // (filling in zeros would be more logic, but this is just for the example)
                  //array2D[h][w] = w + width * h;
            	array2D[h][w] = 0;
            }
      }

      return array2D;
}

int** testFillSudoku(int** inputSudoku) {

	inputSudoku[0][2] = 7;
	inputSudoku[0][3] = 1;
	inputSudoku[0][4] = 5;
	inputSudoku[0][7] = 4;
	inputSudoku[0][3] = 6;
	inputSudoku[1][3] = 1;
	inputSudoku[1][5] = 9;
	inputSudoku[1][7] = 7;
	inputSudoku[1][8] = 4;
	inputSudoku[2][0] = 5;
	inputSudoku[2][2] = 4;
	inputSudoku[2][5] = 6;
	inputSudoku[3][0] = 3;
	inputSudoku[3][2] = 8;
	inputSudoku[3][7] = 4;
	inputSudoku[4][0] = 2;
	inputSudoku[4][1] = 7;
	inputSudoku[4][7] = 1;
	inputSudoku[4][8] = 9;
	inputSudoku[5][2] = 1;
	inputSudoku[5][6] = 3;
	inputSudoku[5][8] = 7;
	inputSudoku[6][3] = 8;
	inputSudoku[6][6] = 6;
	inputSudoku[6][8] = 3;
	inputSudoku[7][9] = 9;
	inputSudoku[7][1] = 2;
	inputSudoku[7][3] = 6;
	inputSudoku[7][5] = 4;
	inputSudoku[8][1] = 8;
	inputSudoku[8][4] = 2;
	inputSudoku[8][5] = 7;
	inputSudoku[8][6] = 4;
	inputSudoku[8][8] = 1;

	return inputSudoku;
}

int printSudoku(int** inputSudoku) {
	int sudokuSize = 9;
	cout << "-------------------------------------" << endl;

	for(int i = 0; i < sudokuSize; i++) {
		cout << "| ";
		for(int j = 0; j < sudokuSize; j++) {
			cout << inputSudoku[i][j];
			if((j+1)%3 == 0) {cout << " | ";} else {cout << "   ";}
		}

		if((i+1)%3 == 0) {
			cout << endl << "-------------------------------------" << endl;
		}
		else {
			cout << endl << endl;
		}
	}

	return 0;
}

int countOccurances(int* inputColumn, int number) {
	int counter = count(inputColumn, inputColumn+9, number);
	return counter;
}

int* findMissingValues(int* inputColumn) {
	int* outputColumn = 0;
	int* possibilities = new int*{1, 2, 3, 4, 5, 6, 7, 8, 9};

	int emptyElements = countOccurances(inputColumn, 0);

	outputColumn = new int*[9-emptyElements];



	return outputColumn;
}

int** sudokuSolver(int** inputSudoku) {
	int** solvedSudoku;

	int** rows = 0;
	rows = new int*[9];
	for (int h = 0; h < 9; h++) {
		rows[h] = new int[9];
		for (int q = 0; q < 9; q++) {
			rows[h][q] = inputSudoku[h][q];
		}
	}

	int** columns = 0;
	columns = new int*[9];
	for (int h = 0; h < 9; h++) {
		columns[h] = new int[9];
		for (int q = 0; q < 9; q++) {
			columns[h][q] = inputSudoku[q][h];
		}
	}


	int** squares = 0;
	squares = new int*[9];
	for (int h = 0; h < 9; h++) {
		squares[h] = new int[9];
		for (int q = 0; q < 9; q++) {
			int k = 0;

			if(q > 5) {k = 2;}
			else if (q > 2) {k =1;}
			else {k = 0;}

			if(h > 5) {k += 2*3;}
			else if (h > 2) {k +=1*3;}
			else {k += 0;}

			int l = q%3 + h%3*3;

			squares[h][q] = inputSudoku[k][l];
			//cout << "row: " << k << " column: " << l << endl;
		}
		//cout << h << "next square" << endl;
	}


	// solver1


	int sumRows = 0;
	int sumColumns = 0;
	int sumSquares = 0;
	bool matchingSums = false;

	while(matchingSums) {
		cout << "calculating" << endl;

		for

		if(sumRows == 45 and sumColumns == 45 and sumSquares == 45) {
			matchingSums = true;
		}
	}

	/*
	cout << "squares" << endl;
	for (int i = 0; i < 9; i++) {
		cout << squares[0][i] << endl;
	}
	*/

	/*
		break;
	}
	*/
	solvedSudoku = inputSudoku;

	return solvedSudoku;

}
