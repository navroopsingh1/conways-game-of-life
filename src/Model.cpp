//Amrit Pandher   pandha1
#include "Model.h"
#include <iostream>
#include <fstream>
#include <stdexcept>

Model::Model(std::string file){
     this->S = readFile(file);
     this->copy = readFile(file);
     this->generation = 0;

}

int Model::getGen(){
    return this->generation;
}

std::vector<std::vector<bool>> Model::nextGen(){
    this->generation++;
    for(unsigned int i = 1; i<9; i++){
        for(unsigned int j = 1; j<9; j++){
            this->S[i][j] = nextState(i,j);
        }
    }
    this->copy = this->S;
    return this->S;
}

// local functions
bool Model::nextState(int i, int j){
    bool state = this->copy[i][j];
    int nb = countNeighbours(i,j);

    if(state == true){
        if(nb == 2 || nb == 3){
            state = true;
        }
        else{
            state = false;;
        }
    }

    else if(state == false) {
        if(nb == 3){
            state = true;
        }
        else {
            state = false;
        }
    }
    return state;
}


int Model::countNeighbours(int row, int col){
    int count = 0;
    for(int i=-1; i<2; i++){
        for(int j =-1; j<2; j++){
             if(i == 0 && j == 0){
                 continue;
             }
            if(this->copy[row + i][col + j] == true){
                count += 1;
            }
        }
    }
    return count;

}

std::vector<std::vector<bool>> Model::readFile(std::string file){
    std::vector<std::vector<bool>> temp;
    std::vector<bool> temp1;
    std::string line;
    std::ifstream myfile(file);
     if (myfile.is_open()){
         while(getline(myfile,line)){
         for(std::string::size_type i = 0; i < line.size(); i++) {
                 char c = line[i];
                 if(c == '1'){
                    temp1.push_back(true);
                }
                else{
                    temp1.push_back(false);
                }
            }
            temp.push_back(temp1);
            temp1.clear();
        }

    }
    myfile.close();
    return temp;
}



