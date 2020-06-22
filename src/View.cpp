//Amrit Pandher  pandha1
#include "View.h"

void writeFile(std::vector<std::vector<bool>> s, std::string filename){
    std::ofstream myfile;
    myfile.open(filename);

    for(unsigned int i = 0; i < 10; i++){
        for(unsigned int j = 0; j < 10; j++){
            if(s[i][j] == true){
                std::cout << "1";
                myfile << "1";
            }
            else{
                myfile << "0";
                std::cout << "0";
            }
            
        }
        std::cout << std::endl;
        myfile << "\n";

    }

    myfile.close();

}










    

