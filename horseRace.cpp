#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int horsENum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

int main(){
	std::cout << "Horse race game " << std:: endl;
	srand(time(NULL));

	int horses[NUM_HORSES] = {0, 0, 0, 0, 0};
	bool winner = false;
	
	// advance horses
	while (!winner){
		for (int i = 0; i < NUM_HORSES; i++){
			advance(i, horses);
		}
	// print lanes
	for (int i = 0; i < NUM_HORSES; i++){
		printLane(i, horses);
	}

	// check winner
	for (int i = 0; i < NUM_HORSES; i++){
		if (isWinner(i, horses)){
			std::cout << "Horse " << i << " WINS!" << std::endl;
			winner = true;
		}
	}


	if (!winner)
		std::cout << "Press enter for another turn";
		std::cin.get();
	}
	return 0;
} // end main

void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH; i++){
		if (i == horses[horseNum]){
			std::cout << horseNum;
		} else {
			std::cout << ".";
		} // end if
	} // end for loop
	// print newLine
	std::cout << std::endl;
} // end printLane

void advance(int horseNum, int* horses){
	int coin = rand() % 2;
	horses[horseNum] += coin;
} // end advance

bool isWinner(int horseNum, int* horses){
	if (horses[horseNum] >= TRACK_LENGTH - 1){
		return true;
	}
	return false;
} // end 



