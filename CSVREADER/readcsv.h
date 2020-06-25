// ============================================================================
// === READ CSV ===============================================================
#ifndef READCSV_H
#define READCSV_H

#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <boost/algorithm/string.hpp>


class CSVReader{
    std::string fileName;
    std::string delimeter; // delimeter (i.e. comma)

    public:
	CSVReader(std::string filename, std::string delim = ",") :
		fileName(filename), delimeter(delim)
	{ }

	// Function to intake data from CSV
	std::vector<std::vector<std::string> > getData();
};

#endif // end of READCSV_H
