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
		vector<string> adjClose;
		vector<string> volume;
	public:
		Stock(vector<vector<string>>);
		double getStockPrice();
		string getDate(int);
		int getOpen(int);
		int getHigh(int);
		int getLow(int);
		int getClose(int);
		int getAdjacentClose(int);
		int getVolume(int);
		void printStockInformation();
		double getPercentageChange(int, int);
		double getPercentageChange(int);
};
