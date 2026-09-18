#include <stdlib>
#include <ctime>


void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);
const int TRACK_LENGTH = 15;
const int NUM_HORSES = 5;

int main(){
	std::cout << "Horse Race Game" << std::endl;
	srand(time(NULL));

	horses[horseNum] = {0, 0, 0, 0, 0}
	bool keepGoing = true

	while (winner = true){
	for (int
	}
return 0
} // end main
 
void advance(int horseNum, int* horses){
	int coinFlip = rand() % 1;
	horses[horseNum] += coinFlip;
} // end advance

void printLane(int horseNum, int* horses){
	for(int i = 0; i < TRACK_LENGTH; i++){
	if (i == horses[horseNum]){
		std::cout << horses[horseNum] << std::endl;	
	} else {
		std::cout << "." << std::endl;
	}

	std::cout << "\n" << std::endl;
} // end printLane
bool isWinner(int horseNum, int* horses){
	if(horses[horseNum] == TRACK_LENGTH){
		std::cout << horseNum << std::endl;
		return true;
	} // end if
	else {
	return false;
	} // end else	
}
