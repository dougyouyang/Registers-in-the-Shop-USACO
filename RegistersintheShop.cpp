//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    queue<int> line;
    vector<int> reg[35];
    int nor;
    int i, j;
    
    cin >> nor;
    while(true){
        char c;
        int tag;
        cin >> c >> tag;
        if(cin.eof())
            break;
        if(c=='C')
            line.push(tag);
        else{
            reg[tag].push_back(line.front());
            line.pop();
        }
    }
    
    for(i=1;i<=nor;i++){
        int size=reg[i].size();
        cout << size;
        for(j=0;j<size;j++){
            cout << " " << reg[i][j];
        }
        cout << endl;
    }
    
    return 0;
}
