#include "Functions.h"

int main() {


	int** inputSudoku = createSudoku();
	int** solvedSudoku = createSudoku();

	testFillSudoku(inputSudoku);

	cout << "input sudoku" << endl;
	printSudoku(inputSudoku);

	solvedSudoku = sudokuSolver(inputSudoku);
	cout << "solved sudoku" << endl;
	printSudoku(solvedSudoku);

	return 0;
}
