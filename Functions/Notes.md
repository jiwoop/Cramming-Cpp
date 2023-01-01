### Parameters and Arguments

When tossed into a function, parameters

        int foo(int x, int y)
        {
            return x + y;
        }


In this case, x and y are parameters and destroyed after the execution.


When declared, arguments

        int main()
        {
            int x = 1, y = 2;
            foo(x, y);
        }


### Call by Value

        void doSomething(int y)
        {
            cout << y << endl;
        }


        int main()
        {
            doSomething(5);
            // y is initialized with 5

            int x = 6;
            doSomething(x);
            // Only value is delivered.
            doSomething(x+1);
            // Also possible therefore.

            return 0;
        }

Nice since the value does not affect the program. (Since it gets destroyed right after)


### Call by reference

Used a lot in open source.

        void addOne(int &y)
        {
            y = y+1;
            // (1)
        }

        int main()
        {
            int x = 5;
            // (2)

            addOne(x);
            // (3)
        }

        /*
            At (1), (2), (3),
            address of x and y are same.
            Instead of value, variable itself is passed.
        */

Another example:

        void getSinCos(double degrees, double &sin_out, double &cos_out)
        {
            static const double pi = 3.141592;
            double radians = degree * pi / 180.0;
            sin_out = std::sin(radians);
            cos_out = std::cos(radians);
        }

        /*
            result (sin_out and cos_out) can affect when the function is declared in main.
        */

        int main()
        {
            double sin(0.0);
            double cos(0.0);

            getSinCos(30,0, sin, cos);

            return 0;
        }

By using Call by Reference, can output multiple values from function.


Putting *const* in front of input and utilizing call by reference for output helps readers.


Yet, downside of Call by Reference:

        void foo(int &x)
        {
            cout << c << endl;
        }

        int main()
        {
            foo(6);
            // Error occurs
        }

Error occurs since 6 is literal, that has no address.
To fix:


either put const in front of int &x or removing &.


To make point parameter,

        typedef int* pint;
        void foo(pint &ptr)
        {
            cout << ptr << endl;
        }

        int main ()
        {
            int x = 5;
            int *ptr = &x;

            // ptr points to the address of x.
            // Question is... how to make foo() have pointer as a parameter.

            // Because we did pint &ptr (which is actually int *&ptr)

            foo(ptr);
        }



### Call by address (Using pointer)

    void foo(int *ptr)
    {
        // do something
    }
    
    int main()
    {
        int val = 5;
        cout << val << " " << &val << endl;

        foo(&val);
    }

Useful when: Passing the array into the function.


Also changes the array when modified in the function.


        void foo(int *arr, int length)
        {
            arr[0] = 1.0;
        }


### Inline functions

        inline int min(int x, int y)
        {
            return x > y ? y : x;
        }

Instead of doing


cout << min(5,6) << endl, it's possible to do cout << (5>6 ? 6:5) with inline function.


Why? It is (little) faster. Yet, it is more like -- if you can do inline, do inline.


### Function Overloading

        int addInt(int x, int y)
        {
            return x + y;
        }

        double addInt(double x, double y)
        {
            return x + y;
        }

Instead,

        int add(int x, int y)
        {
            return x + y;
        }

        double add(double x, double y)
        {
            return x + y;
        }

Although same name, if parameter types are different, consider as a different functions -> fundamentals behind the function overload.


Compiler decides it.


### Function Pointers

        int func()
        {
            return 5;
        }

        int ten()
        {
            return 10;
        }

        int main()
        {
            cout << func << endl;
            // returns the address of the function, since the function is also a pointer.

            // How to use function pointer

            int(*fcnptr)() = func;
            cout << fcnptr() << endl;
            // 5

            fcnptr = ten;
            cout << fcnptr() << endl;
            // 6
        }


Function pointer must match the layout of original function that it's copying.


        bool isEven(const int& number)
        {
            if (element % 2 == 0) return true;
        }

        bool isOdd(const int& number)
        {
            if (element % 2 == 1) return true;
        }
        
        void printNumbers(const array<int, 10> &my_array, bool (*check_fcn)(const int&) = isEven)
        // isEven is default
        {
            for (auto element : my_array)
            {
                if (check_fcn(element) == true) cout << element;
            }
        }
        
        int main()
        {
            std::array<int, 10> my_array = { 0,1,2,3,4,5,6,7,8,9 };
            
            printNumbers(my_array);
            printNumbers(my_array, isOdd);
            // no & needed since already pointer.
        }


if #include <functional>


### Stack and Heap


Pointer -> why is it so complicated?


OS gives memory when user runs the program. Memory has segments: (From the top)
1. Heap
2. Stack
    - LIFO structure
    - From the top:
    - Function b
    - Function a
    - main()


    Stack overflow could occurs since small.
3. Data
    - initialized
4. BSS (Block started by symbol)
    - uninitialized, zero-initialized
5. Code

        int main()
        {
            int *ptr = nullptr;
            ptr = new int[1000000];

            delete[] ptr;

            ptr = nullptr;
            // needed in case ptr is used after deletion.

            return 0;
        }
Dynamic array.


main() int *ptr in stack


sizeof(int) x 1000000 Bytes in Heap -> Heap has big memory, but don't know where unlike Stack.