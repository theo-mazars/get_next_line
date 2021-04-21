/*
** EPITECH PROJECT, 2019
** get_next_line
** File description:
** main - source github
*/

#include <stdlib.h>
#include <unistd.h>

static size_t string_size(const char *str) {
    size_t i = 0;

    if (str == NULL)
        return 0;
    while (str[++i]);
    return i;
}

static char *add_char_to_str(char *str, char c)
{
    int i = 0;
    char *buff = malloc(sizeof(char) * (string_size(str) + 2));

    if (str == NULL) {
        if (c != '\n')
            buff[i++] = c;
    } else {
        for (i = 0; str[i]; i++)
            buff[i] = str[i];
        buff[i++] = c;
    }
    if (str != NULL)
        free(str);
    buff[i] = 0;
    return (buff);
}

char *gnl(const int fd)
{
    char *buffer;
    char buff = 0;
    int fs = 0;

    buffer = NULL;
    while ((fs = read(fd, &buff, 1)) > 0) {
        if (buff == '\n')
            break;
        buffer = add_char_to_str(buffer, buff);
    }
    if (fs == 0 || fs == -1) {
        return (NULL);
    }
    return ((buffer != NULL) ? buffer : "");
}
