def NBitBinary(self, N):
	# code here
	output_list = []
    def helper(One,Zero,N,Op):
        # base condition
        if N==0:
            output_list.append(Op)
            return
        # condition for adding one
        helper(One+1,Zero,N-1,Op+"1")
        
        if(One>Zero):
            helper(One,Zero+1,N-1,Op+"0")
        # condition for adding zero when one > zero
        return
    helper(0,0,N,"")
    return output_list