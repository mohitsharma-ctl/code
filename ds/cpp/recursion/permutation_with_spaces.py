def pattern(input,ouput):
    if len(input) == 0:
        print(ouput)
    # print(ouput)
        return
    # return

    pattern(input[1:],ouput+'_'+input[0])
    pattern(input[1:],ouput+input[0])

ip = 'abc'
pattern(ip[1:],ip[0])