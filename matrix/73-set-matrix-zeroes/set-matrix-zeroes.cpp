class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     
        int row=matrix.size();
        int col=matrix[0].size();

        bool firstrow=0;
        bool firstcol=0;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
               if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;

                if(i==0)
                firstrow=1;

                if(j==0)
                firstcol=1;
               } 
            }
        }

        for(int i=row-1;i>0;i--){
            if(matrix[i][0]==0){
               for(int j=1;j<col;j++){
                matrix[i][j]=0;
               } 
            }

        }

          for(int j=col-1;j>0;j--){
            if(matrix[0][j]==0){
               for(int i=1;i<row;i++){
                matrix[i][j]=0;
               } 
            }

        }

    if(firstrow){
     for(int j=0;j<col;j++){
        matrix[0][j]=0;
     }   
    }

     if(firstcol){
     for(int i=0;i<row;i++){
        matrix[i][0]=0;
     }   
    }


        
    }
};