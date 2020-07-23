# CS100_Stock_Analysis_Project
/* ============================================================================
   === Program: Stock Analysis ================================================
   === Authors:	Jered Vaichis	-- jvaic001@ucr.edu
		Kenneth Gelasio -- kgela001@ucr.edu
		Kevin Loi	-- kloi002@ucr.edu 

   === Description ============================================================
	    This program will utilize C++11 for the data manipulation. If any
	    graphs are implemented, python 3.1 will be utilized. The program 
	    will take in a csv of raw stock data from one of the following
	    websites:
		* E*Trade.com
		* finhub API
		* Alpha Vantage API
		* Robinhood
	    The program will prompt user for growth of stock (dates/single day)
	    or other.
   === IN/OUT =================================================================
	    IN	-- stock_data.csv
		   user input (switch on request)
	    OUT	-- analyzed_data.csv
		    # Can figure out whether or not we want to use pyhton for
		    # charts. I have a decent python data science textbook that
		    # we can use to implement charts. If you guys know a better
		    # way or know how to do this, feel free to take charge.
	   GOALS --
	   -create a program to view stocks and stock data
	   -find stock growth over a period of time
   ==========================================================================*/
// end of proposal



==== STUFF TO WORK ON ================================================================

	-- What design patterns are we going to implement?
	    * strategy
	    * composite
	    * abstract factory
	    * decorator
	    * visitor
    -- prompt user for growth (between dates/ single day)
    -- Display (graph vis or other software)
    -- Maybe implement API if time allows
    -- Develop Interface
    -- Command line
======================================================================================


POST PROJECT
======================================================================================

A. Report about project

  Our original plans for the project changed after one of our group members had to drop the
class due to personal reasons. Originally, we wanted more functionality to the project and a 
more polished final product including API's, visuals, and real-time data.
  When it got down to coding, it became clear why design patterns and workflows are so important
 when developing software. We felt initially that our plan of implementing code was good enough 
 for us to develop the program, but it quickly became clear that our plan was not as detailed as 
 we hoped. Using a strategy such as AGILE would have increased our efficency tremendously.
  Some of the issues we had while programming was figuring out how to implement the different design 
 patterns. As you can see in the branches on gitHub, we attempted a few different patterns before 
 ultimately settling on using the composite and strategy patterns (due to us missing one member,
 our TA, Gurneet Kaur, allowed us to use two design patterns instead of three).
  We worked on the program by creating the menu first and then working from there. The biggest 
  issue we had was figuring out how to store in the data from the CSV files. We were unable to 
  figure out how to get it to work and also where it would fit in the patterns but we managed to
  get it working.
  
  
B. SCREENSHOTS
https://drive.google.com/drive/folders/1vbfdnj44eIYeAwFDCqObMfwT-wjDFc84?usp=sharing
https://drive.google.com/file/d/1ybJFiCp-Icue452j_svdJE8yRE6KQv_K/view?usp=sharing

C. Instructions for use
- Make sure to add a stock to your portfolio and select the stock before running other functions
- The data only provides data from 2018-2013, be sure to input dates using the format provided.
 

PATTERNS USED:
-strategy pattern
-composite pattern

Input/Output:
in - stock_data.csv
	user input
out - Stock data
	Stock Portfolio
