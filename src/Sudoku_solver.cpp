#include "Functions.h"

int main() {

//	int value;
//	int * delta;
//
//	int i = 0;
//	while(i<1e3) {
//		delta = &value;
//		*delta += 5;
//		if(i%1==0) {
////			cout << "value is:" << value << endl;
//		}
//		i++;
//	}

	vector< vector<int> > inputSudoku = createSudoku();
	vector< vector<int> > solvedSudoku = createSudoku();

	inputSudoku =testFillSudoku(inputSudoku);

	cout << "input sudoku" << endl;
	printSudoku(inputSudoku);

	clock_t tStart = clock();

	solvedSudoku = sudokuSolver(inputSudoku);

	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

	cout << "output sudoku" << endl;
	printSudoku(solvedSudoku);



	return 0;
}
