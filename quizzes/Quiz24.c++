/*
CS371p: Quiz #24 (5 pts) <Chuying>
*/

/* -----------------------------------------------------------------------
 1. In Darwin why does the infect instruction have to result in reseting
    the program counter of the infected creature?
    (2 pts)

otherwise, the program counter of the infected creature might be out of
range in the new program
*/

/* -----------------------------------------------------------------------
 2. Describe what this Darwin creature does in the long run if there are
    no other creatures in the game.
    (2 pts)

    0: if_empty 3
    1: left
    2: go 0
    3: hop
    4: go 0

moves counterclockwise around the grid
*/
