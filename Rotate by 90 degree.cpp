void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    
      int n = matrix.size();            
     

   
     for(int i=0; i<n; i++){
         int low = 0, high=n-1;
         
         while(low<high){
             swap(matrix[i][low], matrix[i][high]);
             high--;
             low++;
         }
     }
     

    
     for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
          swap(matrix[i][j], matrix[j][i]);
}
