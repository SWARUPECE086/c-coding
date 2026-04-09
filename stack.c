#include <stdio.h>

struct stack {
    int a[10];
    int top;
};

int main() {
    struct stack st;
    int choice, x, i;

    st.top = -1;

    while (1) {
        printf("\n1.Push 2.Pop 3.Display 4.Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
               
                if (st.top == 9) {
                    printf("Overflow\n");
                } else {
                    printf("Enter value: ");
                    scanf("%d", &x);
                    st.top++;
                    st.a[st.top] = x;
                }
                break;

            case 2:
                
                if (st.top == -1) {
                    printf("Underflow\n");
                } else {
                    printf("Popped element: %d\n", st.a[st.top]);
                    st.top--;
                }
                break;

            case 3:
               
                if (st.top == -1) {
                    printf("Stack is empty\n");
                } else {
                    printf("Stack elements:\n");
                    for (i = st.top; i >= 0; i--) {
                        printf("%d\n", st.a[i]);
                    }
                }
                break;

            case 4:
            
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
