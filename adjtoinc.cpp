/*
<<<<<<< HEAD
Hilbert basis of cuts - April 2013
- Tanmay Deshpande (crypton480)
=======
Hilbert basis of cuts - June 2013
- Tanmay Deshpande
>>>>>>> 7cd2b4ff2c6956cff1728b327ac88b57e30d294b
tanmaydesh5886@gmail.com
* 
* 
Converts an adjacency matrix into an incidence matrix.
* 
*/
#include <iostream>  
#include <fstream>
#include <math.h>
using namespace std; 
	
int main()
{
int a,b;
a=6; //no of vertices
b=0; //counter for number of edges
int A[a][a];
ofstream mat ("matrix.txt"); //output an incidence matrix
ifstream adj ("adj.txt"); //input graph as adjacency matrix

for(int i=0;i<a;i++)
for(int j=0;j<a;j++)
adj>>A[i][j];

/* Use this in case you want to know if the matrix is input correctly
for(int i=0;i<a;i++){
for(int j=0;j<b;j++){
cout<<I[i][j]<<" ";
}
cout<<"\n";
}
cout<<"\n";*/

//For '1' in the upper triangle of the incidence matrix, create an incidence vector in the incidence matix
for(int i=0;i<a;i++)
for(int j=i;j<a;j++)
{
	if (A[i][j] == 1){
		for (int k=0; k<a; k++){
			if ((k ==i ) || (k == j))
				mat<<"1\t";	
			else
				mat<<"0\t";
		}
		mat<<"\n";
		b++;
	}
}

cout<<"Number of edges = "<<b<<"\n";
return 0;
}
