#ifndef _FILE_H_
#define _FILE_H_

struct cell {
  char word[MAX_WORD_LENGTH+1];  // a char array for words of length MAX_WORD_LENGTH
  int  noccs;                    // an integer for counting occurrences
  struct cell* next;             // a (possibly NULL) pointer to the following cell
};

struct pool {
  struct cell m[MAX_CELLS];      // an array of memory cells
  struct cell* next_free;        // a pointer to the first free cell
};
struct pool pool = { {}, pool.m }; // Trick to initialize the pool statically

#endif