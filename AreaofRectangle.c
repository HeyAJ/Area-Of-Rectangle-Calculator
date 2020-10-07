# include <stdio.h>

int main() {
    
    int length, breadth;

    printf("please enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("please enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    printf("the area of your rectangle is: %d", length * breadth);
    return 0;
}

