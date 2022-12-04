#ifndef NAMES_ST_H
#define NAMES_ST_H

#define SLEN 32

struct names_st
{
    char first[SLEN];
    char second[SLEN];
};

typedef struct names_st names;

void show_name(const names *);

#endif //NAMES_ST_H
