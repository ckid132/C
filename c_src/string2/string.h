#ifndef STRING_H
#define STRIMG_H

int my_strlen(const char *s);
void my_strcpy(char *des, const char *src); //복사하고 끝이라 한쪽만 const
int my_strcmp(const char *s1, const char *s2); // 둘다 내용을 바꿔야하니 둘다 const
void my_strcat(char *des, const char *src);

#endif
