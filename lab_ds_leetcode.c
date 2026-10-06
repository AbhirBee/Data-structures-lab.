#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char s[] = "([])"; // Input string
    int len = strlen(s);

    char stack[10000];
    int top = -1;
    bool is_valid = true;

    for (int i = 0; i < len; i++) {
        char char_item = s[i];

        if (char_item == '(') {
            stack[++top] = ')';
        } else if (char_item == '{') {
            stack[++top] = '}';
        } else if (char_item == '[') {
            stack[++top] = ']';
        } else {
            // Closing bracket check
            if (top == -1 || stack[top--] != char_item) {
                is_valid = false;
                break;
            }
        }
    }

    if (top != -1) {
        is_valid = false;
    }

    if (is_valid) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
