# Pointers_Operations_in_cpp

Aim: To study and implement Pointer Operations (Call by value and Call by reference).

Tools Used: VS Code.

# Theory:

## What is a Pointer in C++?

A pointer in C++ is a variable that stores the memory address of another variable. It allows direct access and manipulation of the data stored at that address.
A pointer’s data type determines the type of variable it can point to. The address-of operator (&) is used to get the address of a variable, and the dereference operator (*) is used to access the value stored at the pointed memory location.

## Key Features:

* Storage of address – A pointer stores the memory location (address) of a variable rather than the value itself.

* Indirect access – By dereferencing a pointer (using *), you can access or modify the value stored at the address it points to.

* Flexibility – Pointers enable dynamic memory allocation, array handling, passing large data efficiently, and implementing call by reference.

## What is a Function in C++?

A function is a block of code that performs a specific task. Functions help make your code modular, reusable, and easier to maintain. It enhances code reusability, readability, and minimizes redundancy by encapsulating repeated operations into a single callable unit. Functions accept input parameters, provide output values, or both. 
Types of parameter passing are Call by Value, Call by Reference, and Call by Pointer.

## Key Features:

* Modularity.

* Code Reusability

* Parameter passing is supported by value, reference, and pointers.

* Supported for calculations, condition checks, and data manipulation.

## Call by Value:

In call by value, a copy of the actual argument’s value is passed to the function. Changes made inside the function do not affect the original variable.

return_type function_name(data_type parameter) {

    // function body
}

int main() {

    data_type variable = value;
    
    function_name(variable); 
}

## Call by Reference:

In call by reference, the function receives the actual variable itself. Changes made inside the function affect the original variable.


return_type function_name(data_type &parameter) { 

    // function body
    
}

int main() {

    data_type variable = value;
    
    function_name(variable);
}

## Call by Pointer:

In call by pointer, the function receives the memory address of the variable. By dereferencing the pointer, the function can directly modify the original variable's value.


return_type function_name(data_type *parameter) {

    // function body
}

int main() {

    data_type variable = value;
    
    function_name(&variable);
}

## Program-1 Call by Value:

Explanation: This program demonstrates call by Value in C++. In this approach, the swap function takes copies of variables a and b. Changes made to x and y inside the function affect only these copies, not the original variables. As a result, the swapped values are not reflected in the main function. Call by value is useful when we do not want the original data to be modified. 

## Algorithm:

1. Start.

2. Define a function to swap two values.

3. Perform swapping inside the function using a temporary storage.

4. In the main program, declare two numbers.

5. Call the function with these numbers.

6. Display the numbers in the main program.

7. There will be no change as pass by value.

8. Stop.

## Program-2 Call by Reference:

Explanation: This program shows call by reference in C++. The swap function uses reference parameters (with &) to directly access and swap the original variables without copying. A temporary variable helps exchange the values. When a and b are passed to swap, their values are permanently swapped. This method is efficient since it works directly on the original data.

## Algorithm:

1. Start.

2. Define a function to swap two values using references.

3. Swap the values inside the function.

4. In the main program, declare two numbers.

5. Call the function with these numbers.

6. Display the modified values.

7. The values will be swaped pass by refrence.

8. Stop.

## Program-3 Call by Pointer:

Explanation: In this program, two integers a and b are declared. The swap function takes pointers to these integers. By passing their addresses, the function can directly change the original values. Inside swap, the * operator accesses and swaps the values using a temporary variable. Since it modifies the actual memory locations, the changes remain after the function ends. This shows pass by pointer, where arguments are passed as addresses.

## Algorithm:

1. Start.

2. Define a function to swap two values using addresses.

3. Perform swapping inside the function by dereferencing.

4. In the main program, declare two numbers.

5. Call the function with the addresses of these numbers.

6. Display the modified values.

7. There will be no change as pass by value.

8. Stop.

## Program-4 Salary Increment:

Explanation: This program gives a salary increment according to certain conditions like projects, publications, profits, and new projects. Call by reference changes the salary in the original variable, but call by value does not. It illustrates decision-making through functions.

## Algorithm:

1. Start.

2. Define two functions: one to update salary by reference, and one by value.

3. Take input for current salary and performance metrics.

4. Check given conditions for increment eligibility.

5. If eligible, call the function that updates salary by reference.

6. If not eligible, call the function that updates salary by value.

7. Display the salary.

8. Stop.

## Program-5 Change of Array:

Explanation: This program modifies every element of an array to begin with a specified number, each element increasing by one. Passing array and variable by reference enables the values to be modified directly. It emphasizes passing arrays to functions.

## Algorithm:

1. Start.

2. Define a function to modify array elements and increment a counter.

3. Take input for the starting number.

4. Display the original array.

5. Call the function to modify the array.

6. Display the updated array.

7. Stop.

# Conclusion:
We have learned, different types of functions in C++ including call by value, call by reference, call by pointer, conditional operations using functions, and passing arrays to functions. Each technique is applicable in certain situations, is efficient enough, and has some impact upon original
