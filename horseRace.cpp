#include <stdlib>
#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);


int main(){
	std::cout << "Horse Race Game" << std::endl;
	srand(time(NULL));

	
