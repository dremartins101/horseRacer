#include <cstdlib>
#include <ctime>
#include <iostream>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);
const int TRACK_LENGTH = 15;
const int NUM_HORSES = 5;

int main(){
	srand(time(NULL));
	std::cout << "Horse Race Game" << std::endl;
	int horses[NUM_HORSES] = {0, 0, 0, 0, 0};
	bool keepGoing = true;

	while (keepGoing){
	for (int i = 0; i < NUM_HORSES; i++){
		printLane(i, horses);
	}
		std::cout << "Press enter for another turn" << std::endl;
		std::cin.get();
		for (int i = 0; i < NUM_HORSES; i++){
		advance(i, horses);
		if (isWinner(i, horses)){
			std::cout << "Horse " << i << " wins!" << std::endl;
			keepGoing = false;
			}
		}
	}
return 0;
} // end main
 
void advance(int horseNum, int* horses){
	int coinFlip = rand() % 2;
	horses[horseNum] += coinFlip;
} // end advance

void printLane(int horseNum, int* horses){
	for(int i = 0; i < TRACK_LENGTH; i++){
	if (i == horses[horseNum]){
		std::cout << horseNum;
	} else {
		std::cout << ".";
	}

	}
	std::cout << "\n" << std::endl;
} // end printLane
bool isWinner(int horseNum, int* horses){
	if(horses[horseNum] == TRACK_LENGTH - 1){
		return true;
	} // end if
	else {
	return false;
	} // end else	
}
