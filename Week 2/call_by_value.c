// credist to tutorial points
// Macro arguments don't have type check!
// #define INCREMENT(x) ++x 

// if you don't define the function before you use it...
// same with python
// Function Prototype
void swapx(int x, int y);

// Main function
int main()
{
    int a = 10, b = 20;

    // Pass by Values
    swapx(a, b);

    printf("a=%d b=%d\n", a, b);    // nothing's changed

    return 0;
}

void swapx(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;

    printf("x=%d y=%d\n", x, y);    // success
}