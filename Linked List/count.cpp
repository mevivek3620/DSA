
#include <bits/stdc++.h>

using namespace std;


int main()
{
    fstream file; 
    string word, t, q, filename; 
  
    // filename of the file 
    filename = "a.txt"; 
  
    // opening file 
    file.open(filename.c_str()); 
    int cnt= 0;
    // extracting words from the file 
    while (file >> word) 
    { 
        // displaying content 
        // cout << word << endl; 
        cnt++;
    } 
     cout<<cnt<<endl;
    return 0; 
} 
    
