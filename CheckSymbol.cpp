#ifndef __CHECK_SYMBOL_HPP__
#define __CHECK_SYMBOL_HPP__
#include <vector>
#include <string>
#include <iostream>
#include "CheckStrategy.hpp"
using namespace std;

const vector <string> SymList={"ABV","ABBV","ABMD","ACN","ATVI","ADBE","AMD","AAP","AES","AFL","A","APD","AKAM","ALK","ALB","ARE","ALXN","ALGN","ALLE","ALL","AMZN","AMCR","AEE","AAL","AEP","AXP","AIG","AMT","AWK","AMP","ABC","AME","AMGN","APH","ADI","ANSS","ANTM","AON","AOS","APA","AIV","AAPL","AMAT","APTV","ADM","ANET","AJG","AIZ","ATO","ADSK","ADP","AZO","AVB","AVY","AVGO","BKR","BLL","BAC","BK","BAX","BDX","BRK.B","BBY","BIO","BIIB","BLK","BA","BKNG","BWA","BXP","BSX","BMY","BR","BF.B","BEN","CHRW","COG","CDNS","CPB","COF","CAH","CCL","CARR","CAT","CBOE","CBRE","CDW","CE","CNC","CNP","CTL","CERN","CF","CHTR","CVX","CMG","CB","CHD","CI","CINF","CTAS","CSCO","C","CFG","CTXS","CLX","CME","CMS","CTSH","CL","CMCSA","CMA","CAG","CXO","COP","COO","CPRT","CTVA","COST","COTY","CCI","CSX","CMI","CVS","CRM","DHI","DHR","DRI","DVA","DE","DAL","DVN","DXCM","DLR","DFS","DISCA","DISCK","DISH","DG","DLTR","D","DPZ","DOV","DOW","DTE","DUK","DRE","DD","DXC","DGX","DIS","ED","ETFC","EMN","ETN","EBAY","ECL","EIX","EW","EA","EMR","ETR","EOG","EFX","EQIX","EQR","ESS","EL","EVRG","ES","EXC","EXPE","EXPD","EXR",
                            "FANG","FFIV","FB","FAST","FRT","FDX","FIS","FITB","FE","FRC","FISV","FLT","FLIR","FLS","FMC","F","FTNT","FTV","FBHS","FOXA","FOX","FCX","FTI","GOOGL","GOOG","GLW","GPS","GRMN","GD","GE","GIS","GM","GPC","GILD","GL","GPN","GS","GWW","HRB","HAL","HBI","HIG","HAS","HCA","HSIC","HSY","HES","HPE","HLT","HFC","HOLX","HD","HON","HRL","HST","HWM","HPQ","HUM","HBAN","HII","IT","IEX","IDXX","INFO","ITW","ILMN","INCY","IR","INTC","ICE","IBM","IP","IPG","IFF","INTU","ISRG","IVZ","IPGP","IQV","IRM","JKHY","J","JBHT","JNJ","JCI","JPM","JNPR","KMX","KO","KSU","K","KEY","KEYS","KMB","KIM","KMI","KLAC","KSS","KHC","KR","LNT","LB","LHX","LH","LRCX","LW","LVS","LEG","LDOS","LEN","LLY","LNC","LIN","LYV","LKQ","LMT","L","LOW","LYB","LUV","MMM","MO","MTB","MRO","MPC","MKTX","MAR","MMC","MLM","MAS","MA","MKC","MXIM","MCD","MCK","MDT","MRK","MET","MTD","MGM","MCHP","MU","MSFT","MAA","MHK","MDLZ","MNST","MCO","MS","MOS","MSI","MSCI","MYL","NDAQ","NOV","NTAP","NFLX","NWL","NEM","NWSA","NWS","NEE","NLSN","NKE","NI","NBL","NSC","NTRS","NOC","NLOK","NCLH","NRG","NUE","NVDA","NVR","NOW","ORLY"
                            ,"OXY","ODFL","OMC","OKE","ORCL","OTIS","O","PEAK","PCAR","PKG","PH","PAYX","PAYC","PYPL","PNR","PBCT","PEP","PKI","PRGO","PFE","PM","PSX","PNW","PXD","PNC","PPG","PPL","PFG","PG","PGR","PLD","PRU","PEG","PSA","PHM","PVH","PWR","QRVO","QCOM","RE","RL","RJF","RTX","REG","REGN","RF","RSG","RMD","RHI","ROK","ROL","ROP","ROST","RCL","SCHW","STZ","SJM","SPGI","SBAC","SLB","STX","SEE","SRE","SHW","SPG","SWKS","SLG","SNA","SO","SWK","SBUX","STT","STE","SYK","SIVB","SYF","SNPS","SYY","T","TAP","TMUS","TROW","TTWO","TPR","TGT","TEL","TDY","TFX","TXN","TXT","TMO","TIF","TJX","TSCO","TT","TDG","TRV","TFC","TWTR","TYL","TSN","UDR","ULTA","USB","UAA","UA","UNP","UAL","UNH","UPS","URI","UHS","UNM","VFC","VLO","VAR","VTR","VRSN","VRSK","VZ","VRTX","VIAC","V","VNO","VMC","WRB","WAB","WMT","WBA","WM","WAT","WEC","WFC","WELL","WST","WDC","WU","WRK","WY","WHR","WMB","WLTW","WYNN","XRAY","XOM","XEL","XRX","XLNX","XYL","YUM","ZBRA","ZBH","ZION","ZTS"};

class CheckSymbol : public Check{ 
    public:
string Check(){
string input = "";
bool check;
while(check){
cout << "Enter name of ticker (e.g 'AAPL'): ";
cin >> input;
for (unsigned i = 0; i < SymList.size(); ++i){
    if (input == SymList.at(i)){
        cout << endl << input << " found!" << endl;
        return input;
    }
}
cout << endl << input << " not found!" << endl;
}
return input;
}
};

#endif
