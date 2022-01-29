import sys
# For getting input from input.txt file
sys.stdin = open('input.txt','r')
 # Printing the Output to output.txt file
sys.stdout = open('output.txt','w')











matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]


row_top = 0
row_bottom = len(matrix)-1
column_left = 0
column_right = len(matrix[0])-1
cnt = 0
total = len(matrix)*len(matrix[0])
ans = []
# print('hhhhhh')
while(cnt<total):
  for i in range(column_left,column_right+1):   #top row
    if(cnt<total):
      ans.append(matrix[row_top][i])
      cnt+=1
  row_top+=1
  
  for i in range(row_top,row_bottom+1):    # side column to bottom
      if(cnt<total):
        ans.append(matrix[i][column_right])
        cnt+=1
  column_right-=1
    
  for i in range(column_right,column_left-1,-1): #bottom row iterate reverse
      if(cnt<total):
        ans.append(matrix[row_bottom][i])
        cnt+=1
  row_bottom-=1
  
  for i in range(row_bottom,row_top-1,-1):    #side left column to top 
      if(cnt<total):
        ans.append(matrix[i][column_left])
        cnt+=1
  column_left+=1
print(ans)