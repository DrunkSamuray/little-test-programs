//Task: write a program calculating rectangle area.

#include "stdio.h"

typedef char bool;
bool true = 1, false = 0;

struct Rectangle {
    int width;
    int height;
};

int calc_rectangle_area(struct Rectangle *rectangle);
void clear_stdin();

int main() {
	printf("Welcome to Rect Area calc program!\n");

	struct Rectangle rectangle;
	char result;

	while (true) {
        printf("\nContinue calculating? Y/N: ");

        scanf("%c", &result);
        clear_stdin();

        if (result == 'N') {
            printf("End of program.\n");
            break;
        } else if (result == 'Y') {
            printf("Enter width: ");
            scanf("%d", &rectangle.width);
            clear_stdin();

            printf("Enter height: ");
            scanf("%d", &rectangle.height);
            clear_stdin();

            int area = calc_rectangle_area(&rectangle);

            printf("The area of provided rectangle is %d square pixels.\n", area);
        }

	}

	return 0;
}

int calc_rectangle_area(struct Rectangle *rectangle) {
    return rectangle->width * rectangle->height;
}

void clear_stdin() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
