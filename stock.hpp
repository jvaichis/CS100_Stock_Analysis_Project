#include <cmath>
#include <vector>

using namespace std;
class Stock{
	private:
		vector<string> date;
		vector<string> open;
		vector<string> high;
		vector<string> low;
		vector<string> close;
		vector<string> volume;
		vector<string> symbol;
	public:
		Stock(vector<vector<string>>);
		double getStockPrice();
		bool isValidDate(string);
		bool isValidSymbol(string)
		string getDate(int);
		int getOpen(int);
		int getHigh(int);
		int getLow(int);
		int getClose(int);
		int getVolume(int);
		void printStockInformation();
		double getPercentageChange(int, int);
		double getPercentageChange(int);
		string getSymbol(int);
};
