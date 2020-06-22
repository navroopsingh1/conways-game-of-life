//Amrit Pandher   pandha1
/**
 *  \file Model.h
 *  \brief A model for representing the board.
 */


#ifndef MODEL_H_

#define MODEL_H_ 


#include <vector>
#include <string>


class Model{

private:
/**
 *  \brief Reads the input file and stores it in a 2D vector
 *  \param file The name of the file to be read
 *  \return A 2D vector containing the state of the board
 */
std::vector<std::vector<bool>> readFile(std::string file);

/**
 *  \brief Counts the number living cells around the specified cell
 *  \param row The row the specified cell is in
 *  \param col The column the specified cell is in
 *  \return An integer representing the number of living cells around the specified cell
 */
int countNeighbours(int row, int col);

/**
 *  \brief Determines the next state of a specified cell
 *  \param i The row the cell is contained in 
 *  \param j The column the cell is contained in
 *  \return A boolean value representing the next state of the cell
 */
bool nextState(int i, int j);

std::vector<std::vector<bool>> S;
std::vector<std::vector<bool>> copy;
int generation;


public:
/**
 *  \brief The constructor of the model
 *  \param file The name of the file that contains the initial state of the game
 *  \return A Model with the initial state of the game loaded
 */
Model(std::string file);

/**
 *  \brief Determines the current generation of the game
 *  \return An integer representing the current generation of the game
 */

int getGen();
/**
 *  \brief Determines the next generation of the game
 *  \return A 2D vector containing the next generation of the game.
 */
std::vector<std::vector<bool>> nextGen();
};
#endif 