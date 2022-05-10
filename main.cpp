#include <iostream>
#include<bits/stdc++.h>

using namespace std;



class Graph {
public:
    map<int, bool> visited;
    map<int, list<int> > vertex;

    // function to add an edge to graph
    void addEdge(int a, int b){
      vertex[a].push_back(b);
    }

    


    void print(){
       for(auto iter = vertex.begin() ; iter != vertex.end(); iter++ ){
         cout<<"\n "<<iter->first<<" | ";
         for(auto it = vertex[iter->first].begin(); it != vertex[iter->first].end();it++){
           cout<<" -> "<<*it;
         }
       } 
    }

   
    void BFS(int v){
      queue<int> q;
      q.
    }
    
    
};


int main() {

  Graph g;

  g.addEdge(0,3);
  g.addEdge(0,4);
  g.addEdge(1,3);
  g.addEdge(1,5);
  g.addEdge(2,4);
  g.addEdge(3,0);
  g.addEdge(3,1);
  g.addEdge(4,0);
  g.addEdge(4,2);
  g.addEdge(5,1);
  g.addEdge(5,4);

  g.print();


  // std::cout << "Hello World!\n";

  



  
}