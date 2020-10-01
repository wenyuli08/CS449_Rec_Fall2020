// credist to tutorial points
// Function Prototype
void swapx(int*, int*);

// Main function
int main()
{
    int a = 10, b = 20;

    // Pass reference
    swapx(&a, &b);

    printf("a=%d b=%d\n", a, b);    // success

    return 0;
}

void swapx(int* x, int* y)
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("x=%d y=%d\n", *x, *y);  // success
}