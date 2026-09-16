# horseRacer

## Func Prototypes
- void advance(int horseNum, int* horses);
- void printLane(int horseNum, int* horses);
- bool isWinner(int horseNum, int* horses);


## Algorithm

set up randomization (c style)
set up horses array

set keepGoing to true
while loop for main game
for loop goes through horses
for each horse:
    print lanes for horse
    advance horse

check winners
winCount = 0
if horse wins, add 1 to winCount

if winCount == 1:
    print horse # that won
    set keepGoing to false
    

void advance(int horseNum, int* horses){
    given horseNum (position) and horse array
    rand number 0-1
    if 1, move horse up
}


void printLane(int horseNum, int* horses){
    given horseNum and horse array
    for loop goes from 0 to TRACK_LENGTH 
        if i == current horse position:
            print horseNum
        else:
            print "."
}


bool isWinner(int horseNum, int* horses){
    given horseNum and horse array
    if horseNum 


