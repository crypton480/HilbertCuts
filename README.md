Hilbert Bases of Cuts
===========

A set of vectors 'S' in R^n is called a Hilbert bases if any vector that is in the cone and the lattice generated by S is also in the integer cone generated by S. Given a graph G, we can construct a set of vectors in R^E given by the characteristic vectors of cuts of G. It is an open question to determine for which graphs does this set form a Hilbert bases.

This repository consists of code written in C++ for calculating Hilbert bases of cuts of graphs using the Normaliz software. http://www.mathematik.uni-osnabrueck.de/normaliz/

For questions or comments, feel free to write to tanmaydesh5886@gmail.com


Instructions:
-----------

1. matrix.txt is incidence matrix of graph.
Rows represent the edges and columns represent the vertices


2. use forloop.cpp to fill in code for code.cpp. 
There should be as many nested for loops as the number of vertices of the graph.


3. use code.cpp to generate cuts.
Fill in correct values for a and b in code.cpp. Compile and run code.cpp -> outputs characteristic vectors of cuts into graph.in


4. Find Cone and Hilbert basis using Normaliz.
To use Normaliz, download the basic package and executables in the same folder. From the terminal go to the correct folder and type "java -jar jNormaliz.jar". Open the file graph.in and run Normaliz with Hilbert basis mode (or higher).


References:
-----------

1. L. A. Goddyn, "Cones, lattices and Hilbert bases of circuits and perfect matchings", in Graph Structure Theory, Contemporary Mathematics 147 (1993), 419-439.

2. F. Lauberthe, "The Hilbert Basis of the Cut Cone over the Complete Graph K_6", in E. Balas and J. Clausen, eds., Integer Programming and Combinatorial Optimization, Lecture Notes in Computer Science, 
Vol. 920 (Springer, Berlin, 1995) 252-266.

3. M. Laurent, "Hilbert Bases of Cuts", Discrete Mathematics 150 Elsevier (1996) 257–279
