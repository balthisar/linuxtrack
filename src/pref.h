#ifndef PREF__H
#define PREF__H

#include <stdbool.h>

bool section_exists(char *section_name);
bool key_exists(char *section_name, char *key_name);
char *get_key(char *section_name, char *key_name);

bool change_key(char *section_name, char *key_name, char *new_value);
bool dump_prefs(char *file_name);
void free_prefs();

#endif
