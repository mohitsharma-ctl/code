def dec_to_word(x):
    if x==0:
        return
    else:
        rem = x%10
        if rem == 1:
            dec_to_word(x//10)
            print('One')
        elif rem == 2:  
            dec_to_word(x//10)
            print('Two')
        elif rem==3:
            dec_to_word(x//10)
            print('Three')
        elif rem==4:
            dec_to_word(x//10)
            print('Four')
        elif(rem==5):
            dec_to_word(x//10)
            print('Five')
        elif(rem==6):
            dec_to_word(x//10)
            print('Six')
        elif(rem==7):
            dec_to_word(x//10)
            print('Seven')
        elif(rem==8):
            dec_to_word(x//10)
            print('Eight')
        elif(rem==9):
            dec_to_word(x//10)
            print('Nine')
        elif(rem==0):
            dec_to_word(x//10)
            print('Zero')


print(dec_to_word(1304))