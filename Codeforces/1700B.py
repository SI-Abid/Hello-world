for _ in range(int(input())):
    input()
    s=input()
    if s[0]=='9':
        a=int('1'*(len(s)+1))
        x=str(a-int(s))
        # if len(x)<len(s):
        #     x="1"+x
        print(x)
    else:
        a=(10**len(s))-1
        print(a-int(s))