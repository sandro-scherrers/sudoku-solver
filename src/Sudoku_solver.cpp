#include "Functions.h"

int main() {

	int value;
	int * delta;

	int i = 0;
	while(i<1e3) {
		delta = &value;
		*delta += 5;
		if(i%1==0) {
//			cout << "value is:" << value << endl;
		}
		i++;
	}

	vector< vector<int> > inputSudoku = createSudoku();
	vector< vector<int> > solvedSudoku = createSudoku();

	testFillSudoku2(inputSudoku);

	cout << "input sudoku" << endl;
	printSudoku(inputSudoku);

//	solvedSudoku = sudokuSolver(inputSudoku);
	cout << "solved sudoku" << endl;
	printSudoku(solvedSudoku);



	return 0;
}
