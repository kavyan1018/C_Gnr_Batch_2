    // With return type With arguments

    #include <stdio.h>
    #include <conio.h>

    // Function declaration
    int add();
    void main()
    {

        int a, b, ans;

        ans = add(a, b);

        printf("Sum is: %d\n", ans);
    }

    int add(int a, int b)
    {
        int ans;

        printf("Enter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);
        ans = a + b;
        return ans;
    }