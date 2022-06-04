// https://www.geeksforgeeks.org/factorial-large-number/
// 2 type se ho skta hai yeh question 1 . ARRAY  2. LINKLIST LINKLIST IS BETTER  
#include<iostream>
using namespace std;

// Maximum number of digits in output
// macro --
#define MAX 500

int multiply(int x, int arr[], int arr_size);

// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
	int arr[MAX];

	// Initialize result
	arr[0] = 1;
	int arr_size = 1;

	// Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
	for (int x=2; x<=n; x++)
		arr_size = multiply(x, arr, arr_size);

	cout << "Factorial of given number is \n";
	for (int i = arr_size-1; i>=0; i--)
		cout << arr[i];
}

int multiply(int x, int arr[], int arr_size)
{
	int carry = 0; // Initialize carry

	// One by one multiply n with individual digits of arr[]
	for (int i=0; i<arr_size; i++)
	{
		int prod = arr[i] * x + carry;

		// Store last digit of 'prod' in arr[]
		arr[i] = prod % 10;

		// Put rest in carry
		carry = prod/10;
	}

	// Put carry in arr and increase result size
	while (carry)
	{
		arr[arr_size] = carry%10;
		carry = carry/10;
		arr_size++;
		
	}
	return arr_size; 
}

// Driver program
int main()
{
	factorial(40);
	return 0;
}

// (Using LinkedList)

/*#include <bits/stdc++.h>

using namespace std;

#define rep(i, a, b) for (int i = a; i <= b; i++)

using namespace std;
// Made a class node containing data and previous pointer as
// we are using tail pointer
class Node {
public:
	int data;
	Node* prev;
	Node(int n)
	{
		data = n;
		prev = NULL;
	}
};

void Multiply(Node* tail, int n)
{
	Node *temp = tail,
		*prevNode = tail; // Temp variable for keeping tail
	int carry = 0;
	while (temp != NULL) {
		int data = temp->data * n + carry;
		temp->data = data % 10; // stores the last digit
		carry = data / 10;
		prevNode = temp;
		temp = temp->prev; // Moving temp by 1 prevNode will
						// now denote temp
	}
	// If carry is greater than 0 then we create another
	// node for it.
	while (carry != 0) {
		prevNode->prev = new Node((int)(carry % 10));
		carry /= 10;
		prevNode = prevNode->prev;
	}
}

void print(Node* tail)
{
	if (tail == NULL) // Using tail recursion
		return;
	print(tail->prev);
	cout
		<< tail->data; // Print linked list in reverse order
}

// Driver code
int main()
{
	int n = 20;
	Node tail(1); // Create a node and initialise it by 1
	rep(i, 2, n)
		Multiply(&tail, i); // Run a loop from 2 to n and
							// multiply with tail's i
	print(&tail); // Print the linked list
	cout << endl;
	return 0;
}

// This code is contributed by Kingshuk Deb8*/
