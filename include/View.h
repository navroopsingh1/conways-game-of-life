//Amrit Pandher  pandha1
/**
 *  \file View.h
 *  \brief A driver to output results of the model into a textfile.
 */

#ifndef VIEW_H_
#define VIEW_H_

#include "Model.h"
#include <iostream>
#include <fstream>
#include <vector>

/**
 *  \brief Accepts a 2d vector and a filename and outputs the vector into the file
 *  \param s The two dimensional boolean vector containing the state of the game
 *  \param filename The name of the file for the elements to be outputted to
 */
void writeFile(std::vector<std::vector<bool>> s, std::string filename);

#endif