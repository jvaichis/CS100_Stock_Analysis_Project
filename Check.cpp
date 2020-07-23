
#include <vector>
#include <string>
#include <iostream>
using namespace std;

const vector <string> SymList={"ABV","ABBV","ABMD","ACN","ATVI","ADBE","AMD","AAP","AES","AFL","A","APD","AKAM","ALK","ALB","ARE","ALXN","ALGN","ALLE","ALL","AMZN","AMCR","AEE","AAL","AEP","AXP","AIG","AMT","AWK","AMP","ABC","AME","AMGN","APH","ADI","ANSS","ANTM","AON","AOS","APA","AIV","AAPL","AMAT","APTV","ADM","ANET","AJG","AIZ","ATO","ADSK","ADP","AZO","AVB","AVY","AVGO","BKR","BLL","BAC","BK","BAX","BDX","BRK.B","BBY","BIO","BIIB","BLK","BA","BKNG","BWA","BXP","BSX","BMY","BR","BF.B","BEN","CHRW","COG","CDNS","CPB","COF","CAH","CCL","CARR","CAT","CBOE","CBRE","CDW","CE","CNC","CNP","CTL","CERN","CF","CHTR","CVX","CMG","CB","CHD","CI","CINF","CTAS","CSCO","C","CFG","CTXS","CLX","CME","CMS","CTSH","CL","CMCSA","CMA","CAG","CXO","COP","COO","CPRT","CTVA","COST","COTY","CCI","CSX","CMI","CVS","CRM","DHI","DHR","DRI","DVA","DE","DAL","DVN","DXCM","DLR","DFS","DISCA","DISCK","DISH","DG","DLTR","D","DPZ","DOV","DOW","DTE","DUK","DRE","DD","DXC","DGX","DIS","ED","ETFC","EMN","ETN","EBAY","ECL","EIX","EW","EA","EMR","ETR","EOG","EFX","EQIX","EQR","ESS","EL","EVRG","ES","EXC","EXPE","EXPD","EXR",
                            "FANG","FFIV","FB","FAST","FRT","FDX","FIS","FITB","FE","FRC","FISV","FLT","FLIR","FLS","FMC","F","FTNT","FTV","FBHS","FOXA","FOX","FCX","FTI","GOOGL","GOOG","GLW","GPS","GRMN","GD","GE","GIS","GM","GPC","GILD","GL","GPN","GS","GWW","HRB","HAL","HBI","HIG","HAS","HCA","HSIC","HSY","HES","HPE","HLT","HFC","HOLX","HD","HON","HRL","HST","HWM","HPQ","HUM","HBAN","HII","IT","IEX","IDXX","INFO","ITW","ILMN","INCY","IR","INTC","ICE","IBM","IP","IPG","IFF","INTU","ISRG","IVZ","IPGP","IQV","IRM","JKHY","J","JBHT","JNJ","JCI","JPM","JNPR","KMX","KO","KSU","K","KEY","KEYS","KMB","KIM","KMI","KLAC","KSS","KHC","KR","LNT","LB","LHX","LH","LRCX","LW","LVS","LEG","LDOS","LEN","LLY","LNC","LIN","LYV","LKQ","LMT","L","LOW","LYB","LUV","MMM","MO","MTB","MRO","MPC","MKTX","MAR","MMC","MLM","MAS","MA","MKC","MXIM","MCD","MCK","MDT","MRK","MET","MTD","MGM","MCHP","MU","MSFT","MAA","MHK","MDLZ","MNST","MCO","MS","MOS","MSI","MSCI","MYL","NDAQ","NOV","NTAP","NFLX","NWL","NEM","NWSA","NWS","NEE","NLSN","NKE","NI","NBL","NSC","NTRS","NOC","NLOK","NCLH","NRG","NUE","NVDA","NVR","NOW","ORLY"
                            ,"OXY","ODFL","OMC","OKE","ORCL","OTIS","O","PEAK","PCAR","PKG","PH","PAYX","PAYC","PYPL","PNR","PBCT","PEP","PKI","PRGO","PFE","PM","PSX","PNW","PXD","PNC","PPG","PPL","PFG","PG","PGR","PLD","PRU","PEG","PSA","PHM","PVH","PWR","QRVO","QCOM","RE","RL","RJF","RTX","REG","REGN","RF","RSG","RMD","RHI","ROK","ROL","ROP","ROST","RCL","SCHW","STZ","SJM","SPGI","SBAC","SLB","STX","SEE","SRE","SHW","SPG","SWKS","SLG","SNA","SO","SWK","SBUX","STT","STE","SYK","SIVB","SYF","SNPS","SYY","T","TAP","TMUS","TROW","TTWO","TPR","TGT","TEL","TDY","TFX","TXN","TXT","TMO","TIF","TJX","TSCO","TT","TDG","TRV","TFC","TWTR","TYL","TSN","UDR","ULTA","USB","UAA","UA","UNP","UAL","UNH","UPS","URI","UHS","UNM","VFC","VLO","VAR","VTR","VRSN","VRSK","VZ","VRTX","VIAC","V","VNO","VMC","WRB","WAB","WMT","WBA","WM","WAT","WEC","WFC","WELL","WST","WDC","WU","WRK","WY","WHR","WMB","WLTW","WYNN","XRAY","XOM","XEL","XRX","XLNX","XYL","YUM","ZBRA","ZBH","ZION","ZTS"};



const vector <string> DateList={"2013-02-11","2013-02-12","2013-02-13","2013-02-14","2013-02-15","2013-02-19","2013-02-20","2013-02-21","2013-02-22","2013-02-25","2013-02-26","2013-02-27","2013-02-28","2013-03-01","2013-03-04","2013-03-05","2013-03-06","2013-03-07","2013-03-08","2013-03-11","2013-03-12","2013-03-13","2013-03-14","2013-03-15","2013-03-18","2013-03-19","2013-03-20","2013-03-21","2013-03-22","2013-03-25","2013-03-26","2013-03-27","2013-03-28","2013-04-01","2013-04-02","2013-04-03","2013-04-04","2013-04-05","2013-04-08","2013-04-09","2013-04-10","2013-04-11","2013-04-12","2013-04-15","2013-04-16","2013-04-17","2013-04-18","2013-04-19","2013-04-22","2013-04-23","2013-04-24","2013-04-25","2013-04-26","2013-04-29","2013-04-30","2013-05-01","2013-05-02","2013-05-03","2013-05-06","2013-05-07","2013-05-08","2013-05-09","2013-05-10","2013-05-13","2013-05-14","2013-05-15","2013-05-16","2013-05-17","2013-05-20","2013-05-21","2013-05-22","2013-05-23","2013-05-24","2013-05-28","2013-05-29","2013-05-30","2013-05-31","2013-06-03","2013-06-04","2013-06-05","2013-06-06","2013-06-07","2013-06-10",
                            "2013-06-11","2013-06-12","2013-06-13","2013-06-14","2013-06-17","2013-06-18","2013-06-19","2013-06-20","2013-06-21","2013-06-24","2013-06-25","2013-06-26","2013-06-27","2013-06-28","2013-07-01","2013-07-02","2013-07-03","2013-07-05","2013-07-08","2013-07-09","2013-07-10","2013-07-11","2013-07-12","2013-07-15","2013-07-16","2013-07-17","2013-07-18","2013-07-19","2013-07-22","2013-07-23","2013-07-24","2013-07-25","2013-07-26","2013-07-29","2013-07-30","2013-07-31","2013-08-01","2013-08-02","2013-08-05","2013-08-06","2013-08-07","2013-08-08","2013-08-09","2013-08-12","2013-08-13","2013-08-14","2013-08-15","2013-08-16","2013-08-19","2013-08-20","2013-08-21","2013-08-22","2013-08-23","2013-08-26","2013-08-27","2013-08-28","2013-08-29","2013-08-30","2013-09-03","2013-09-04","2013-09-05","2013-09-06","2013-09-09","2013-09-10","2013-09-11","2013-09-12","2013-09-13","2013-09-16","2013-09-17","2013-09-18","2013-09-19","2013-09-20","2013-09-23","2013-09-24","2013-09-25","2013-09-26","2013-09-27","2013-09-30","2013-10-01","2013-10-02","2013-10-03","2013-10-04","2013-10-07","2013-10-08"
                            ,"2013-10-09","2013-10-10","2013-10-11","2013-10-14","2013-10-15","2013-10-16","2013-10-17","2013-10-18","2013-10-21","2013-10-22","2013-10-23","2013-10-24","2013-10-25","2013-10-28","2013-10-29","2013-10-30","2013-10-31","2013-11-01","2013-11-04","2013-11-05","2013-11-06","2013-11-07","2013-11-08","2013-11-11","2013-11-12","2013-11-13","2013-11-14","2013-11-15","2013-11-18","2013-11-19","2013-11-20","2013-11-21","2013-11-22","2013-11-25","2013-11-26","2013-11-27","2013-11-29","2013-12-02","2013-12-03","2013-12-04","2013-12-05","2013-12-06","2013-12-09","2013-12-10","2013-12-11","2013-12-12","2013-12-13","2013-12-16","2013-12-17","2013-12-18","2013-12-19","2013-12-20","2013-12-23","2013-12-24","2013-12-26","2013-12-27","2013-12-30","2013-12-31","2014-01-02","2014-01-03","2014-01-06","2014-01-07","2014-01-08","2014-01-09","2014-01-10","2014-01-13","2014-01-14","2014-01-15","2014-01-16","2014-01-17","2014-01-21","2014-01-22","2014-01-23","2014-01-24","2014-01-27","2014-01-28","2014-01-29","2014-01-30","2014-01-31","2014-02-03","2014-02-04","2014-02-05","2014-02-06","2014-02-07",
                            "2014-02-10","2014-02-11","2014-02-12","2014-02-13","2014-02-14","2014-02-18","2014-02-19","2014-02-20","2014-02-21","2014-02-24","2014-02-25","2014-02-26","2014-02-27","2014-02-28","2014-03-03","2014-03-04","2014-03-05","2014-03-06","2014-03-07","2014-03-10","2014-03-11","2014-03-12","2014-03-13","2014-03-14","2014-03-17","2014-03-18","2014-03-19","2014-03-20","2014-03-21","2014-03-24","2014-03-25","2014-03-26","2014-03-27","2014-03-28","2014-03-31","2014-04-01","2014-04-02","2014-04-03","2014-04-04","2014-04-07","2014-04-08","2014-04-09","2014-04-10","2014-04-11","2014-04-14","2014-04-15","2014-04-16","2014-04-17","2014-04-21","2014-04-22","2014-04-23","2014-04-24","2014-04-25","2014-04-28","2014-04-29","2014-04-30","2014-05-01","2014-05-02","2014-05-05","2014-05-06","2014-05-07","2014-05-08","2014-05-09","2014-05-12","2014-05-13","2014-05-14","2014-05-15","2014-05-16","2014-05-19","2014-05-20","2014-05-21","2014-05-22","2014-05-23","2014-05-27","2014-05-28","2014-05-29","2014-05-30","2014-06-02","2014-06-03","2014-06-04","2014-06-05","2014-06-06","2014-06-09","2014-06-10",
                            "2014-06-11","2014-06-12","2014-06-13","2014-06-16","2014-06-17","2014-06-18","2014-06-19","2014-06-20","2014-06-23","2014-06-24","2014-06-25","2014-06-26","2014-06-27","2014-06-30","2014-07-01","2014-07-02","2014-07-03","2014-07-07","2014-07-08","2014-07-09","2014-07-10","2014-07-11","2014-07-14","2014-07-15","2014-07-16","2014-07-17","2014-07-18","2014-07-21","2014-07-22","2014-07-23","2014-07-24","2014-07-25","2014-07-28","2014-07-29","2014-07-30","2014-07-31","2014-08-01","2014-08-04","2014-08-05","2014-08-06","2014-08-07","2014-08-08","2014-08-11","2014-08-12","2014-08-13","2014-08-14","2014-08-15","2014-08-18","2014-08-19","2014-08-20","2014-08-21","2014-08-22","2014-08-25","2014-08-26","2014-08-27","2014-08-28","2014-08-29","2014-09-02","2014-09-03","2014-09-04","2014-09-05","2014-09-08","2014-09-09","2014-09-10","2014-09-11","2014-09-12","2014-09-15","2014-09-16","2014-09-17","2014-09-18","2014-09-19","2014-09-22","2014-09-23","2014-09-24","2014-09-25","2014-09-26","2014-09-29","2014-09-30","2014-10-01","2014-10-02","2014-10-03","2014-10-06","2014-10-07","2014-10-08",
                            "2014-10-09","2014-10-10","2014-10-13","2014-10-14","2014-10-15","2014-10-16","2014-10-17","2014-10-20","2014-10-21","2014-10-22","2014-10-23","2014-10-24","2014-10-27","2014-10-28","2014-10-29","2014-10-30","2014-10-31","2014-11-03","2014-11-04","2014-11-05","2014-11-06","2014-11-07","2014-11-10","2014-11-11","2014-11-12","2014-11-13","2014-11-14","2014-11-17","2014-11-18","2014-11-19","2014-11-20","2014-11-21","2014-11-24","2014-11-25","2014-11-26","2014-11-28","2014-12-01","2014-12-02","2014-12-03","2014-12-04","2014-12-05","2014-12-08","2014-12-09","2014-12-10","2014-12-11","2014-12-12","2014-12-15","2014-12-16","2014-12-17","2014-12-18","2014-12-19","2014-12-22","2014-12-23","2014-12-24","2014-12-26","2014-12-29","2014-12-30","2014-12-31","2015-01-02","2015-01-05","2015-01-06","2015-01-07","2015-01-08","2015-01-09","2015-01-12","2015-01-13","2015-01-14","2015-01-15","2015-01-16","2015-01-20","2015-01-21","2015-01-22","2015-01-23","2015-01-26","2015-01-27","2015-01-28","2015-01-29","2015-01-30","2015-02-02","2015-02-03","2015-02-04","2015-02-05","2015-02-06","2015-02-09",
                            "2015-02-10","2015-02-11","2015-02-12","2015-02-13","2015-02-17","2015-02-18","2015-02-19","2015-02-20","2015-02-23","2015-02-24","2015-02-25","2015-02-26","2015-02-27","2015-03-02","2015-03-03","2015-03-04","2015-03-05","2015-03-06","2015-03-09","2015-03-10","2015-03-11","2015-03-12","2015-03-13","2015-03-16","2015-03-17","2015-03-18","2015-03-19","2015-03-20","2015-03-23","2015-03-24","2015-03-25","2015-03-26","2015-03-27","2015-03-30","2015-03-31","2015-04-01","2015-04-02","2015-04-06","2015-04-07","2015-04-08","2015-04-09","2015-04-10","2015-04-13","2015-04-14","2015-04-15","2015-04-16","2015-04-17","2015-04-20","2015-04-21","2015-04-22","2015-04-23","2015-04-24","2015-04-27","2015-04-28","2015-04-29","2015-04-30","2015-05-01","2015-05-04","2015-05-05","2015-05-06","2015-05-07","2015-05-08","2015-05-11","2015-05-12","2015-05-13","2015-05-14","2015-05-15","2015-05-18","2015-05-19","2015-05-20","2015-05-21","2015-05-22","2015-05-26","2015-05-27","2015-05-28","2015-05-29","2015-06-01","2015-06-02","2015-06-03","2015-06-04","2015-06-05","2015-06-08","2015-06-09","2015-06-10",
                            "2015-06-11","2015-06-12","2015-06-15","2015-06-16","2015-06-17","2015-06-18","2015-06-19","2015-06-22","2015-06-23","2015-06-24","2015-06-25","2015-06-26","2015-06-29","2015-06-30","2015-07-01","2015-07-02","2015-07-06","2015-07-07","2015-07-08","2015-07-09","2015-07-10","2015-07-13","2015-07-14","2015-07-15","2015-07-16","2015-07-17","2015-07-20","2015-07-21","2015-07-22","2015-07-23","2015-07-24","2015-07-27","2015-07-28","2015-07-29","2015-07-30","2015-07-31","2015-08-03","2015-08-04","2015-08-05","2015-08-06","2015-08-07","2015-08-10","2015-08-11","2015-08-12","2015-08-13","2015-08-14","2015-08-17","2015-08-18","2015-08-19","2015-08-20","2015-08-21","2015-08-24","2015-08-25","2015-08-26","2015-08-27","2015-08-28","2015-08-31","2015-09-01","2015-09-02","2015-09-03","2015-09-04","2015-09-08","2015-09-09","2015-09-10","2015-09-11","2015-09-14","2015-09-15","2015-09-16","2015-09-17","2015-09-18","2015-09-21","2015-09-22","2015-09-23","2015-09-24","2015-09-25","2015-09-28","2015-09-29","2015-09-30","2015-10-01","2015-10-02","2015-10-05","2015-10-06","2015-10-07","2015-10-08",
                            "2015-10-09","2015-10-12","2015-10-13","2015-10-14","2015-10-15","2015-10-16","2015-10-19","2015-10-20","2015-10-21","2015-10-22","2015-10-23","2015-10-26","2015-10-27","2015-10-28","2015-10-29","2015-10-30","2015-11-02","2015-11-03","2015-11-04","2015-11-05","2015-11-06","2015-11-09","2015-11-10","2015-11-11","2015-11-12","2015-11-13","2015-11-16","2015-11-17","2015-11-18","2015-11-19","2015-11-20","2015-11-23","2015-11-24","2015-11-25","2015-11-27","2015-11-30","2015-12-01","2015-12-02","2015-12-03","2015-12-04","2015-12-07","2015-12-08","2015-12-09","2015-12-10","2015-12-11","2015-12-14","2015-12-15","2015-12-16","2015-12-17","2015-12-18","2015-12-21","2015-12-22","2015-12-23","2015-12-24","2015-12-28","2015-12-29","2015-12-30","2015-12-31","2016-01-04","2016-01-05","2016-01-06","2016-01-07","2016-01-08","2016-01-11","2016-01-12","2016-01-13","2016-01-14","2016-01-15","2016-01-19","2016-01-20","2016-01-21","2016-01-22","2016-01-25","2016-01-26","2016-01-27","2016-01-28","2016-01-29","2016-02-01","2016-02-02","2016-02-03","2016-02-04","2016-02-05","2016-02-08","2016-02-09",
                            "2016-02-10","2016-02-11","2016-02-12","2016-02-16","2016-02-17","2016-02-18","2016-02-19","2016-02-22","2016-02-23","2016-02-24","2016-02-25","2016-02-26","2016-02-29","2016-03-01","2016-03-02","2016-03-03","2016-03-04","2016-03-07","2016-03-08","2016-03-09","2016-03-10","2016-03-11","2016-03-14","2016-03-15","2016-03-16","2016-03-17","2016-03-18","2016-03-21","2016-03-22","2016-03-23","2016-03-24","2016-03-28","2016-03-29","2016-03-30","2016-03-31","2016-04-01","2016-04-04","2016-04-05","2016-04-06","2016-04-07","2016-04-08","2016-04-11","2016-04-12","2016-04-13","2016-04-14","2016-04-15","2016-04-18","2016-04-19","2016-04-20","2016-04-21","2016-04-22","2016-04-25","2016-04-26","2016-04-27","2016-04-28","2016-04-29","2016-05-02","2016-05-03","2016-05-04","2016-05-05","2016-05-06","2016-05-09","2016-05-10","2016-05-11","2016-05-12","2016-05-13","2016-05-16","2016-05-17","2016-05-18","2016-05-19","2016-05-20","2016-05-23","2016-05-24","2016-05-25","2016-05-26","2016-05-27","2016-05-31","2016-06-01","2016-06-02","2016-06-03","2016-06-06","2016-06-07","2016-06-08","2016-06-09",
                            "2016-06-10","2016-06-13","2016-06-14","2016-06-15","2016-06-16","2016-06-17","2016-06-20","2016-06-21","2016-06-22","2016-06-23","2016-06-24","2016-06-27","2016-06-28","2016-06-29","2016-06-30","2016-07-01","2016-07-05","2016-07-06","2016-07-07","2016-07-08","2016-07-11","2016-07-12","2016-07-13","2016-07-14","2016-07-15","2016-07-18","2016-07-19","2016-07-20","2016-07-21","2016-07-22","2016-07-25","2016-07-26","2016-07-27","2016-07-28","2016-07-29","2016-08-01","2016-08-02","2016-08-03","2016-08-04","2016-08-05","2016-08-08","2016-08-09","2016-08-10","2016-08-11","2016-08-12","2016-08-15","2016-08-16","2016-08-17","2016-08-18","2016-08-19","2016-08-22","2016-08-23","2016-08-24","2016-08-25","2016-08-26","2016-08-29","2016-08-30","2016-08-31","2016-09-01","2016-09-02","2016-09-06","2016-09-07","2016-09-08","2016-09-09","2016-09-12","2016-09-13","2016-09-14","2016-09-15","2016-09-16","2016-09-19","2016-09-20","2016-09-21","2016-09-22","2016-09-23","2016-09-26","2016-09-27","2016-09-28","2016-09-29","2016-09-30","2016-10-03","2016-10-04","2016-10-05","2016-10-06","2016-10-07",
                            "2016-10-10","2016-10-11","2016-10-12","2016-10-13","2016-10-14","2016-10-17","2016-10-18","2016-10-19","2016-10-20","2016-10-21","2016-10-24","2016-10-25","2016-10-26","2016-10-27","2016-10-28","2016-10-31","2016-11-01","2016-11-02","2016-11-03","2016-11-04","2016-11-07","2016-11-08","2016-11-09","2016-11-10","2016-11-11","2016-11-14","2016-11-15","2016-11-16","2016-11-17","2016-11-18","2016-11-21","2016-11-22","2016-11-23","2016-11-25","2016-11-28","2016-11-29","2016-11-30","2016-12-01","2016-12-02","2016-12-05","2016-12-06","2016-12-07","2016-12-08","2016-12-09","2016-12-12","2016-12-13","2016-12-14","2016-12-15","2016-12-16","2016-12-19","2016-12-20","2016-12-21","2016-12-22","2016-12-23","2016-12-27","2016-12-28","2016-12-29","2016-12-30","2017-01-03","2017-01-04","2017-01-05","2017-01-06","2017-01-09","2017-01-10","2017-01-11","2017-01-12","2017-01-13","2017-01-17","2017-01-18","2017-01-19","2017-01-20","2017-01-23","2017-01-24","2017-01-25","2017-01-26","2017-01-27","2017-01-30","2017-01-31","2017-02-01","2017-02-02","2017-02-03","2017-02-06","2017-02-07","2017-02-08",
                            "2017-02-09","2017-02-10","2017-02-13","2017-02-14","2017-02-15","2017-02-16","2017-02-17","2017-02-21","2017-02-22","2017-02-23","2017-02-24","2017-02-27","2017-02-28","2017-03-01","2017-03-02","2017-03-03","2017-03-06","2017-03-07","2017-03-08","2017-03-09","2017-03-10","2017-03-13","2017-03-14","2017-03-15","2017-03-16","2017-03-17","2017-03-20","2017-03-21","2017-03-22","2017-03-23","2017-03-24","2017-03-27","2017-03-28","2017-03-29","2017-03-30","2017-03-31","2017-04-03","2017-04-04","2017-04-05","2017-04-06","2017-04-07","2017-04-10","2017-04-11","2017-04-12","2017-04-13","2017-04-17","2017-04-18","2017-04-19","2017-04-20","2017-04-21","2017-04-24","2017-04-25","2017-04-26","2017-04-27","2017-04-28","2017-05-01","2017-05-02","2017-05-03","2017-05-04","2017-05-05","2017-05-08","2017-05-09","2017-05-10","2017-05-11","2017-05-12","2017-05-15","2017-05-16","2017-05-17","2017-05-18","2017-05-19","2017-05-22","2017-05-23","2017-05-24","2017-05-25","2017-05-26","2017-05-30","2017-05-31","2017-06-01","2017-06-02","2017-06-05","2017-06-06","2017-06-07","2017-06-08","2017-06-09",
                            "2017-06-12","2017-06-13","2017-06-14","2017-06-15","2017-06-16","2017-06-19","2017-06-20","2017-06-21","2017-06-22","2017-06-23","2017-06-26","2017-06-27","2017-06-28","2017-06-29","2017-06-30","2017-07-03","2017-07-05","2017-07-06","2017-07-07","2017-07-10","2017-07-11","2017-07-12","2017-07-13","2017-07-14","2017-07-17","2017-07-18","2017-07-19","2017-07-20","2017-07-21","2017-07-24","2017-07-25","2017-07-26","2017-07-27","2017-07-28","2017-07-31","2017-08-01","2017-08-02","2017-08-03","2017-08-04","2017-08-07","2017-08-08","2017-08-09","2017-08-10","2017-08-11","2017-08-14","2017-08-15","2017-08-16","2017-08-17","2017-08-18","2017-08-21","2017-08-22","2017-08-23","2017-08-24","2017-08-25","2017-08-28","2017-08-29","2017-08-30","2017-08-31","2017-09-01","2017-09-05","2017-09-06","2017-09-07","2017-09-08","2017-09-11","2017-09-12","2017-09-13","2017-09-14","2017-09-15","2017-09-18","2017-09-19","2017-09-20","2017-09-21","2017-09-22","2017-09-25","2017-09-26","2017-09-27","2017-09-28","2017-09-29","2017-10-02","2017-10-03","2017-10-04","2017-10-05","2017-10-06","2017-10-09",
                            "2017-10-10","2017-10-11","2017-10-12","2017-10-13","2017-10-16","2017-10-17","2017-10-18","2017-10-19","2017-10-20","2017-10-23","2017-10-24","2017-10-25","2017-10-26","2017-10-27","2017-10-30","2017-10-31","2017-11-01","2017-11-02","2017-11-03","2017-11-06","2017-11-07","2017-11-08","2017-11-09","2017-11-10","2017-11-13","2017-11-14","2017-11-15","2017-11-16","2017-11-17","2017-11-20","2017-11-21","2017-11-22","2017-11-24","2017-11-27","2017-11-28","2017-11-29","2017-11-30","2017-12-01","2017-12-04","2017-12-05","2017-12-06","2017-12-07","2017-12-08","2017-12-11","2017-12-12","2017-12-13","2017-12-14","2017-12-15","2017-12-18","2017-12-19","2017-12-20","2017-12-21","2017-12-22","2017-12-26","2017-12-27","2017-12-28","2017-12-29","2018-01-02","2018-01-03","2018-01-04","2018-01-05","2018-01-08","2018-01-09","2018-01-10","2018-01-11","2018-01-12","2018-01-16","2018-01-17","2018-01-18","2018-01-19","2018-01-22","2018-01-23","2018-01-24","2018-01-25","2018-01-26","2018-01-29","2018-01-30","2018-01-31","2018-02-01","2018-02-02","2018-02-05","2018-02-06","2018-02-07"};    



bool CheckSymbol(){
string input;
cout << "Enter name of ticker (e.g 'AAPL'): ";
cin >> input;
for (unsigned i = 0; i < SymList.size(); ++i){
    if (input == SymList.at(i)){
        cout << endl << input << " found!" << endl;
        return true;
    }
}
cout << endl << input << " not found!" << endl;
return false;

}
int CheckDate(){
int i = 0;
string input;
bool check = false;
cout << "Enter a weekdate from '2013-2-11' to '2018-2-18': ";
while (!check){
cin >> input;
for (i = 0; i < DateList.size(); ++i){
    if (input == DateList.at(i)){
        cout << endl << input << " is a valid date!" << endl;
        check = true;
        return i;
    }
}
cout << endl << input << " not found! Try again: " << endl;
}

return i;
}