import json
a=''
b=''
while True:
    try:
        x=input()
        if(x=='--'):
            break
        a+=x
    except:
        break
while True:
    try:
        x=input()
        b+=x
    except:
        break
    
json1=json.loads(a)
json2=json.loads(b)
if json1==json2:
    print('same')
else:
    print('different')