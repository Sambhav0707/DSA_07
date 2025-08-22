#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
class Solution {
public:
    /*
    so the intuition is around the formula nCr 
    to find any element in the traingle we do 
    r-1 C c-1 that will give the element at rth row
    and cth column ....
    so we initialise the ans by 1 because the first element is 1 only 
    and now we have to find the element as we move in the row :- 
    */

    vector<int> nCr(int rowNumber){
        long long colElement = 1; /* so we are initializing it by 1 bcz :- 
                        [1] , [1,1] , [1,2,,1] always start with 1 */

        vector<int>resultRow;     // the result row   

        resultRow.push_back(colElement); //initializing it with 1

        for(int column = 1 ; column < rowNumber ; column++){

            colElement = colElement * (rowNumber - column); /* so reason we are doing :- (rowNumber - column)
                                                            bcz lets say we are at this row [1,5,10,10,5,1] 
                                                            so suppose we take 0 based columns so at 2 nd column
                                                            the element is 10 so basically it will be derived by 
                                                            10 * 9 * 8
                                                            __   __  __  => so basically what it means like we have to multiply according to the the column th number
                                                            1     2   3  
                                                            
                                                            so for the upper part we go like at coulumn 0 => row 6 - 2 column => 5 
                                                            */
            colElement = colElement/ (column);    // and for the denominator part we do simply divide by the column th bymber

            resultRow.push_back(colElement);


        }  

        return  resultRow;     
    }
    vector<vector<int>> generate(int numRows) {
        
      vector<vector<int>>result;
      for(int row = 1 ; row <= numRows ; row++){
        vector<int>temRow = nCr(row);
        result.push_back(temRow);
      }

      return result;
        

        
    }
};