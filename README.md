# horseRacer
Horse Race program.


## function protos

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWiner(int horseNum, int* horses);

constant in NUM_HORSES

## main

```

set up randomization
set up horses array
5 zero

set keepGoing to true
while loop to manage entire game
while keepGoing:
  go through all the orses (for loop_
  for each horse:
    advance that horse
    print lane for horse
    if horse wins:
      set keepGoing to false (get out of game)
    prmpt for next turn
```

## advance()
```
  given horseNum and horse array
  roll a zero or one -> coin
  add coin to that horse's position value
```

## printLane()
```
  given horseNum and horse array
  for loop from 0 to TRACK_LENGTH -> i
    if i == current horse position:
      print horseNum
    otherwise:
      print a dot
```
## isWinner()
```
  given horseNum and horse array
  result = false
  if this horse's position += TRACK_LENGTH:
    result = true
    print horseNum is the winner
  return result
```


  
