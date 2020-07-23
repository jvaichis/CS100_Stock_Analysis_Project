#include "gtest/gtest.h"

#include <string>
#include <vector>
#include "stock.hpp"

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

TEST(StockPrice, StockPrice1){
	Stock st = Stock("AAL_data.csv");
	Stock st1 = Stock("AET_data.csv");
	Stock st2 = Stock("CFG_data.csv");
	Stock st3 = Stock("EBAY_data.csv");
	double price = st.getStockPrice();
	double price2 = st1.getStockPrice();
	double price3 = st2.getStockPrice();
	double price4 = st3.getStockPrice();
	EXPECT_EQ(price, 51.4);
	EXPECT_EQ(price2, 181.49);
	EXPECT_EQ(price3, 44.84);
	EXPECT_EQ(price4, 42.33);
}

TEST(GetPercentageChange, multiday){
	Stock st = Stock("FRT_data.csv");
	double percent = st.getPercentageChange(10, 30);
	EXPECT_LE(percent, 0.9921802271);
}

Test(GetDate, GetDate){
	Stock st = Stock("IBM_data.csv");
	Stock st1 = Stock("IT_data.csv");
	string msg = st.getDate(35);
	string msg2 = st.getDate(89);
	string msg3 = st1.getDate(64);
	EXPECT_EQ(msg, "2013-04-01");
	EXPECT_EQ(msg2, "2013-06-18");
	EXPECT_EQ(msg3, "2013-05-10");
}

TEST(getOpen, getOpen){
	Stock st = Stock("KR_data.csv");
	Stock st1 = Stock("LUK_data.csv");
	double val = st.getOpen(31);
	double val2 = st.getOpen(81);
	double val3 = st1.getOpen(381);
	EXPECT_EQ(val, 16.21);
	EXPECT_EQ(val2, 16.925);
	EXPECT_EQ(val3, 25.02);
}

TEST(getHigh, getHigh){
	Stock st = Stock("MPC_data.csv");
	Stock st1 = Stock("NLSN_data.csv");
	double val = st.getHigh(2);
	double val1 = st.getHigh(50);
	double val2 = st.getHigh(41);
	EXPECT_EQ(val, 41.0);
	EXPECT_EQ(val1, 40.421);
	EXPECT_EQ(val2, 35.05);
};

TEST(getLow, getLow){
	Stock st = Stock("OKE_data.csv");
	Stock st1 = Stock("O_data.csv");
	double val = st.getLow(29);
	double val2 = st.getLow(72);
	double val3 = st.getLow(671);
	EXPECT_EQ(val, 45.7);
	EXPECT_EQ(val2, 48.08);
	EXPECT_EQ(val3, 49.05);
}

TEST(getClose, getClose){
	Stock st = Stock("PEG_data.csv");
	Stock st1 = Stock("PGR_data.csv");
	double val = st.getClose(34);
	double val2 = st.getClose(61);
	double val3 = st1.getClose(209);
	EXPECT_EQ(val, 34.34);
	EXPECT_EQ(val2, 35.81);
	EXPECT_EQ(val3, 27.14);
	
}

TEST(getVolume, getVolume){
	Stock st = Stock("RE_data.csv");
	Stock st2 = Stock("RTN_data.csv");
	double val = st.getVolume(41);
	double val2 = st.getVolume(56);
	double val3 = st2.getVolume(71);
	EXPECT_EQ(val, 338131);
	EXPECT_EQ(val2, 428269);
	EXPECT_EQ(val3, 1420962);
}

TEST(getSymbol, getSymbol){
	Stock st = Stock("SYY_data.csv");
	Stock st1 = Stock("TSN_data.csv");
	string sym = st.getSymbol(510);
	string sym1 = st.getSymbol(411);
	string sym2 = st.getSymbol(13);
	EXPECT_EQ(sym, "SYY");
	EXPECT_EQ(sym1, "SYY");
	EXPECT_EQ(sym2, "TSN");
}
	








