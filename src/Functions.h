#include <iostream>       // std::cout
#include <string>         // std::string
#include <vector>
#include <bitset>
#include <array>
#include <algorithm>

using namespace std;


vector< vector<int> > createSudoku() {
	int height = 9;
	int width = height;

	vector< vector<int> > array2D(9, vector<int>(9));

	for (int h = 0; h < 9; h++) {
		for (int w = 0; w < 9; w++) {
			array2D[h][w] = 0;
		}
	}
	return array2D;
}

vector< vector<int> > testFillSudoku(vector< vector<int> > inputSudoku) {

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

vector< vector<int> > testFillSudoku2(vector< vector<int> > inputSudoku) {

	inputSudoku[0][1] = 5;
	inputSudoku[0][2] = 1;
	inputSudoku[0][3] = 2;
	inputSudoku[0][7] = 9;
	inputSudoku[1][1] = 3;
	inputSudoku[1][2] = 8;
	inputSudoku[1][4] = 7;
	inputSudoku[1][5] = 9;
	inputSudoku[1][7] = 4;
	inputSudoku[2][0] = 2;
	inputSudoku[2][1] = 9;
	inputSudoku[2][3] = 5;
	inputSudoku[2][8] = 6;
	inputSudoku[3][0] = 1;
	inputSudoku[3][1] = 2;
	inputSudoku[3][2] = 3;
	inputSudoku[3][3] = 6;
	inputSudoku[3][6] = 7;
	inputSudoku[4][0] = 8;
	inputSudoku[4][1] = 7;
	inputSudoku[4][3] = 3;
	inputSudoku[4][5] = 1;
	inputSudoku[4][7] = 5;
	inputSudoku[4][8] = 4;
	inputSudoku[5][2] = 9;
	inputSudoku[5][5] = 8;
	inputSudoku[5][6] = 3;
	inputSudoku[5][7] = 6;
	inputSudoku[5][8] = 1;
	inputSudoku[6][0] = 4;
	inputSudoku[6][5] = 2;
	inputSudoku[6][7] = 1;
	inputSudoku[6][8] = 5;
	inputSudoku[7][1] = 1;
	inputSudoku[7][3] = 8;
	inputSudoku[7][4] = 6;
	inputSudoku[7][6] = 4;
	inputSudoku[7][7] = 3;
	inputSudoku[8][1] = 6;
	inputSudoku[8][5] = 7;
	inputSudoku[8][6] = 9;
	inputSudoku[8][7] = 2;

	return inputSudoku;
}

void printSudoku(int** inputSudoku) {
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

}

int countOccurances(int* inputColumn, int number) {
	int counter = count(inputColumn, inputColumn+9, number);
	return counter;
}

int** findMissingValues(int* inputColumn) {
	int** outputColumn = 0;
	vector<int> possibilities = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	int emptyElements = countOccurances(inputColumn, 0);

	outputColumn = new int*[9-emptyElements];



	return outputColumn;
}



void getRows(vector< vector<int> > inputSudoku, vector< vector<int> > * vec, vector< vector<int> > rows, int h, int q) {
	for (h = 0; h < 9; h++) {
		for (q = 0; q < 9; q++) {
			*vec[h][q] = inputSudoku[h][q];
		}
	}
	vec = &rows;
}

void getColumns(vector< vector<int> > inputSudoku, vector< vector<int> > * vec, vector< vector<int> > columns, int h, int q) {
	for (h = 0; h < 9; h++) {
		for (q = 0; q < 9; q++) {
			*vec[h][q] = inputSudoku[q][h];
		}
	}
	vec = &columns;
}


//int** getColumns(int** inputSudoku) {
//	int h, q;
//	int** columns = 0;
//	columns = new int*[9];
//	for (h = 0; h < 9; h++) {
//		columns[h] = new int[9];
//		for (q = 0; q < 9; q++) {
//			columns[h][q] = inputSudoku[q][h];
//		}
//	}
//
//	return columns;
//}

int** getSquares(int** inputSudoku) {
	int h, q, k, l;
	int** squares = 0;
	squares = new int*[9];
	for (h = 0; h < 9; h++) {
		squares[h] = new int[9];
		for (q = 0; q < 9; q++) {
			k = 0;

			if(q > 5) {k = 2;}
			else if (q > 2) {k =1;}
			else {k = 0;}

			if(h > 5) {k += 2*3;}
			else if (h > 2) {k +=1*3;}
			else {k += 0;}

			l = q%3 + h%3*3;

			squares[h][q] = inputSudoku[k][l];
		}
	}
	return squares;
}


int checkSums(int** inputLists) {
	int checkValue = 0;

	for(int i=0; i<9; i++) {
		int sum = 0;
		for(int j=0; j<9; j++) {
			sum += inputLists[i][j];
		}
		if(sum == 45) checkValue = 1;
	}

	return checkValue;
}

int** sudokuSolver(int** inputSudoku) {

	bool matchingSums = false;
	int iter = 1;

	int sudokuField, checkSum;
	int i, j, k, h, q, randValue;
	vector< vector<int> > rows(9, vector<int>(9));
	vector< vector<int> > columns(9, vector<int>(9));

	vector<int> thisRow(9);
	vector<int> thisColumn(9);

	vector< vector<int> > * vec(9, vector<int>(9));
	bool isOk;

	while(not matchingSums) {

		cout << iter << endl;
		iter++;


		// fill sudoku randomly
		for(i=0; i< 9; i++) {
			for(j=0; j< 9; j++) {
				sudokuField = inputSudoku[i][j];
				if(sudokuField == 0) {
					randValue = 1 + rand() % 9;
					// check if randValue is valid
					thisRow = getRows(inputSudoku, vec, rows, h, q)[i];
					thisColumn = getColumns(inputSudoku, vec, columns, h, q)[j];
					// check if randValue is in rows or columns

					isOk = true;
					for(k=0; k<9; k++) {
						if(thisRow[k] == randValue || thisColumn[k] == randValue) {
							isOk = false;
						}
					}
					if(isOk)
					inputSudoku[i][j] = randValue;
				}
			}

		}

		// calculate rows, columns, squares
//		checkSum = checkSums(getRows(inputSudoku)) + checkSums(getRows(inputSudoku)) + checkSums(getRows(inputSudoku));
		if(checkSum == 3) {
			matchingSums = true;
			cout << "Sudoku solved!" << endl;
		}


	}

	auto solvedSudoku = inputSudoku;

	return solvedSudoku;

}
