def subseq(q,ans):
  if len(q)==0:
    print(ans)
    return
  subseq(q[1:],ans+q[0]) #subtree yes
  subseq(q[1:],ans)      #subtree no
  
  print(subseq("mohit",""))
