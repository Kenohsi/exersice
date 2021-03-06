#ifndef _LIST_H_
#define _LIST_H_
#define _CRT_SECURE_NO_WARNINGS

struct _element {
    char icao_code[5]; // key = icao_code
    char station_name[100]; // value = station_name
    struct _element * next;
};

typedef struct _element element;

struct _list
{
    element * head;
    int count;
};

typedef struct _list list;

list *    l_init(void);
void      l_insert(list * lst, char * icao_code, char * station_name);
void      l_delete(list * lst, char * icao_code);
void      l_print(list * lst);
element * l_find(list * lst, char * icao_code);


#endif /*_LIST_H_*/
