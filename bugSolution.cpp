int main() { int x = 10; int *ptr = &x; // Don't delete ptr! It points to a stack variable. return 0; }