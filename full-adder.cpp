
// C++ program to implement full adder


#include <bits/stdc++.h>
using namespace std;


void Full_Adder(int A,int B,int C_In){ // Function to print sum and C-Out
	int Sum , C_Out;
  
	Sum = C_In ^ (A ^ B); // Calculating value of sum


	C_Out = (A & B) | (B & C_In) | (A & C_In); 	//Calculating value of C-Out


	cout<<"Sum = "<< Sum <<endl; // printing the values
	cout<<"C-Out = "<< C_Out <<endl;
}

int main() {
	int A = 1;
	int B = 0;
	int C_In = 0;

	Full_Adder(A, B, C_In);    	// passing three inputs of fulladder as arguments to get result function
	return 0;
}
