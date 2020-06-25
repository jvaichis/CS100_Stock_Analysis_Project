// ============================================================================
// === MAIN ===================================================================

#include "readcsv.h"

int main(){
    CSVReader reader("AAPL_Hist_6-26-2017_to_6-24-2020.csv");

    // retrieve data from CSV
    std::vector<std::vector<std::string>> dataList = reader.getData();

    // print content row by row
    for(std::vector<std::string> vect : dataList){
	for(std::string data : vect){
	    std::cout<<std::endl;
	}
    }

    for(std::vector<std::string> vec : dataList){
        for(std::string data : vec){
            std::cout<<data << " , ";
        }
        std::cout<<std::endl;
    }
    return 0;
}// end of main
