/*
Hilbert basis of perfect matchings - December 2014
- Tanmay Deshpande (crypton480)
tanmaydesh5886@gmail.com
*
*
Takes a graph as an incidence matrix and outputs a set of matchings in a file (almost) ready for Normaliz to compute Hilbert bases
http://www.mathematik.uni-osnabrueck.de/normaliz/
*
*/

#include <iostream>
#include <fstream>


using namespace std;


int main()
{
int a,b;
b=10; //no of vertices
a=16; //no of edges
int I[a][b];
ifstream matrix ("matrix1.txt"); //input graph as incidence matrix with edges->rows, vertices->columns
ofstream graph ("graph.in"); //prepare output file for Normaliz

for(int i=0;i<a;i++)
for(int j=0;j<b;j++)
matrix>>I[i][j];

/* Use this in case you want to know if the matrix is input correctly
for(int i=0;i<a;i++){
for(int j=0;j<b;j++){
cout<<I[i][j]<<" ";
}
cout<<"\n";
}
cout<<"\n";*/


graph<<a<<"\n"; //no of columns; needed by Normaliz

int e[a];
int c;
bool mat;
for(e[0]=0;e[0]<2;e[0]++) //forloop.cpp makes this easier!
for(e[1]=0;e[1]<2;e[1]++)
for(e[2]=0;e[2]<2;e[2]++)
for(e[3]=0;e[3]<2;e[3]++)
for(e[4]=0;e[4]<2;e[4]++)
for(e[5]=0;e[5]<2;e[5]++)
for(e[6]=0;e[6]<2;e[6]++)
for(e[7]=0;e[7]<2;e[7]++)
for(e[8]=0;e[8]<2;e[8]++)
for(e[9]=0;e[9]<2;e[9]++)
for(e[10]=0;e[10]<2;e[10]++)
for(e[11]=0;e[11]<2;e[11]++)
for(e[12]=0;e[12]<2;e[12]++)
for(e[13]=0;e[13]<2;e[13]++)
for(e[14]=0;e[14]<2;e[14]++)
for(e[15]=0;e[15]<2;e[15]++)
{
    mat = true;
    if(mat)
    {
        for(int j=0;j<b;j++){
            c=0;
            for(int k=0;k<a;k++){
                c=c+(e[k]*I[k][j]);
            }
            if(c!=1)
                mat = false;
        }
    }
    if(mat)
    {
        for( int j=0;j<a;j++)
            graph<<e[j]<<" ";

        graph<<"\n";
    }

}

graph<<"1";	 //tells normaliz to compute Hilbert bases using Lattice generated by cuts and NOT Z^n
}//end main

//Tested for graphs upto 10 vertices.
