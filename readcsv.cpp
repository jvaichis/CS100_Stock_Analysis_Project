#include "readcsv.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <boost/algorithm/string.hpp>

// === getData() ==============================================================
// ============================================================================
// === Description: Parses through the csv line by line.
// IN	--	CSV file
// OUT	--	vector of vector of strings
//  ============================================================================
std::vector<std::vector<std::string>> CSVReader::getData(){
    std::ifstream file(fileName);
    std::vector<std::vector<std::string> > dataList;
    std::string line = "";
    // iterate through each line, splitting using the delimeter
    while(getline(file,line)){
         std::vector<std::string> vect;
         boost::algorithm::split(vect,line,boost::is_any_of(delimeter));
         dataList.push_back(vect)
    }
    // close file
    file.close();

    return dataList;
}
