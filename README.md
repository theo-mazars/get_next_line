# Mini Get Next Line
This function is a mini get_next_line

### Epitech Coding Style
2023

## Do not forget
Don't forget to include stdlib and unistd libraries to your header file

Define the function as follow in your header file: `char *gnl(int);`

## Usage
``` c
int main(void) {
    char *buffer = NULL;
    int fd = open(filepath, O_RDONLY);

    while ((buffer = gnl(fd)) != NULL)
        minif("%s\n", buffer);
    return (0);
}
```

## Warning
This file can't be used as the main file for the get_next_line project:
* It does not use a READ_SIZE variable
* It does not use a static variable

## Author
- [theo.mazars@epitech.eu](https://github.com/theo-mazars)
