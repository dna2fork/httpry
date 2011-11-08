/*

  ----------------------------------------------------
  httpry - HTTP logging and information retrieval tool
  ----------------------------------------------------

  Copyright (c) 2005-2011 Jason Bittel <jason.bittel@gmail.com>

*/

#ifndef _HAVE_UTILITY_H
#define _HAVE_UTILITY_H

char *str_strip_whitespace(char *str);
char *str_tolower(char *str);
int str_compare(const char *str1, const char *str2);
unsigned int hash_str(char *key, unsigned int hashsize);

#endif /* ! _HAVE_UTILITY_H */
